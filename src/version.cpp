#include "../include/versions.hpp"

string Versions::generateFileName(int user_id, int project_id,
                                  int version_number) {
  return to_string(user_id) + "_" + to_string(project_id) + "_version_" +
         to_string(version_number) + ".dat";
}

string Versions::versionControl(int current_id, int modulo_factor, int user_id,
                                int project_id, int version_number,
                                int total_version) {
  if (current_id % modulo_factor == 0) {
    return generateFileName(user_id, project_id, total_version + 1);
  } else {
    return generateFileName(user_id, project_id, version_number);
  }
}

bool Versions::saveState(int user_id, int project_id, int version_number,
                         int total_version, int modulo_factor) {
  try {
    if ((this->new_version.versionid() + 1) % modulo_factor == 0) {
      this->new_version.set_versionid(0);
      this->new_version.set_versionnumber(total_version + 1);
      this->versoin_number_changed = true;
      this->new_file_name =
          generateFileName(user_id, project_id, total_version + 1);
      ofstream ouput_file(this->new_file_name, ios::binary);
      this->new_version.SerializeToOstream(&ouput_file);
      ouput_file.close();
      cout << "New version saved..." << endl;
      return true;
    } else {
      this->new_version.set_versionid(this->new_version.versionid() + 1);
      // cout<<"first version :"<<this->first_version<<endl;
      if (this->first_version) {
        this->new_file_name = generateFileName(user_id, project_id, 1);
        this->first_version = false;
      } else {
        this->new_file_name = generateFileName(
            user_id, project_id, this->new_version.versionnumber());
      }
      // cout<<"ouput file name :"<<this->new_file_name<<endl;
      ofstream ouput_file(this->new_file_name, ios::binary);
      this->new_version.SerializeToOstream(&ouput_file);
      ouput_file.close();
      cout << "Version updated ..." << endl;
      return true;
    }
  } catch (exception e) {
    cerr << "Unable to save the version" << endl;
    return false;
  }
}

bool Versions::versionStatus() {
  bool temp = this->versoin_number_changed;
  this->versoin_number_changed = false;
  return temp;
}

void Versions::info(int user_id, int project_id, int version_id) {
  this->file_name = this->generateFileName(user_id, project_id, version_id);
  cout << "File name: " << this->file_name << endl;
  ifstream file(this->file_name, ios::binary);
  if (file.is_open()) {
    if (this->version.ParseFromIstream(&file)) {
      system("clear");
      std::cout << "Version ID: " << this->version.versionid() << '\n';
      std::cout << "Operation Type: " << this->version.operation().type()
                << '\n';
      std::cout << "Content: " << this->version.operation().content() << '\n';
      std::cout << "Project ID: " << this->version.projectid() << '\n';
      std::cout << "Time: " << this->version.time() << '\n';
      std::cout << "Version Number: " << this->version.versionnumber() << '\n';
      std::cout << "------------------------\n";
    } else {
      std::cerr << "Failed to parse protobuf data from file" << endl;
    }
    file.close();
  } else {
    std::cerr << "Failed to open file" << endl;
  }
}

bool Versions::append(int user_id, int project_id, int version_number,
                      int total_version, int modulo_factor) {
  Operaion ops;
  ops.set_type(Operaion_operaion_type_insert);

  if (version_number != -1) {
    // we have contents
    this->file_name = generateFileName(user_id, project_id, version_number);
    ifstream file(this->file_name, ios::binary);
    if (file.is_open()) {
      if (this->version.ParseFromIstream(&file)) {
        ops.set_content(this->version.operation().content());
        this->new_version.set_versionid(version.versionid());
        this->new_version.set_versionnumber(version.versionnumber());
      } else {
        std::cerr << "Failed to parse protobuf data from file" << endl;
      }
      file.close();
    }
  } else {

    this->first_version = true;
    // cout<<"First version set on function :"<<this->first_version<<endl;
    this->new_version.set_versionid(0);
    this->new_version.set_versionnumber(1);
  }

  string data;
  cin.clear();
  cout << "Enter data to append:";
  getchar();
  getline(cin, data);
  ops.set_content(ops.content() + data);
  this->new_version.set_projectid(project_id);
  this->new_version.set_time(fileOperations::currentDateTime());
  this->new_version.mutable_operation()->CopyFrom(ops);

  return saveState(user_id, project_id, version_number, total_version,
                   modulo_factor);
}

bool Versions::insertOrDelete(int user_id, int project_id, int version_number,
                              int total_version, bool mode_insert,
                              int modulo_factor) {
  Operaion ops;
  ops.set_type(Operaion_operaion_type_insert);

  if (version_number == -1) {
    return this->append(user_id, project_id, version_number, total_version,
                        modulo_factor);
  }

  this->file_name = generateFileName(user_id, project_id, version_number);
  ifstream file(this->file_name, ios::binary);
  if (file.is_open()) {
    if (this->version.ParseFromIstream(&file)) {
      ops.set_content(this->version.operation().content());
      this->new_version.set_versionid(version.versionid());
      this->new_version.set_versionnumber(version.versionnumber());
    } else {
      std::cerr << "Failed to parse protobuf data from file" << endl;
    }
    file.close();
  }

  string sub, data = "";
  cout << "Enter data to modify (substring):";
  getchar();
  getline(cin, sub);

  if (mode_insert) {
    cout << "Enter data for modify (data):";
    // getchar();
    getline(cin, data);
  }
  string final = ops.content();
  fileOperations::replaceAllOccurences(final, sub, data);

  ops.set_content(final);

  this->new_version.set_projectid(project_id);
  this->new_version.set_time(fileOperations::currentDateTime());
  this->new_version.mutable_operation()->CopyFrom(ops);

  return saveState(user_id, project_id, version_number, total_version,
                   modulo_factor);
}
