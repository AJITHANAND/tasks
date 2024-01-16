#ifndef VERSION_HPP
#define VERSION_HPP
#include "../include/fileoperations.hpp"
#include "../protobufs/version.pb.h"

class Versions{
    Version version;
    string file_name;
    int current_version;
    int total_version;
    string new_file_name;
    Version new_version;
    bool versoin_number_changed =false;
    bool first_version =false;
    
    /**
     * @brief To generate version file name 
     * 
     * @param user_id 
     * @param project_id 
     * @param version_number 
     * @return string 
     */
    virtual string generateFileName(int user_id,int project_id, int version_number);

    /**
     * @brief To check whether to store the current version it can be done on the same or generate new version file name
     * 
     * @param current_id current version id (ID of the total operations)
     * @param modulo_factor modulo factor number (when to create a new version file)
     * @param user_id  user's id
     * @param project_id current project being worked on
     * @param version_number  version number
     * @param total_version total version
     * @return string 
     */
    virtual string versionControl(int current_id,int modulo_factor,int user_id,int project_id,int version_number,int total_version);

    /**
     * Saves the state of a project version.
     * here we can decide a new version file or to store in the same file
     * @param user_id The ID of the user.
     * @param project_id The ID of the project.
     * @param version_number The version number to save.
     * @param total_version The total number of versions.
     * @param modulo_factor The modulo factor used for saving.
     * @return True if the state is successfully saved, false otherwise.
     */
    virtual bool  saveState(int user_id,int project_id , int version_number ,int total_version,int modulo_factor);

    public:

        /**
         * @brief is there any version number changes or not
         * 
         * @return true if version number changed
         * @return false if version number not changed
         */
        virtual bool versionStatus();
        
        /**
         * @brief Provides information about a specific version.
         * 
         * This function retrieves information about a specific version identified by the user ID, project ID, and version ID.
         * 
         * @param user_id The ID of the user.
         * @param project_id The ID of the project.
         * @param version_id The ID of the version.
         */
        virtual void info(int user_id,int project_id,int version_id);

        /**
         * @brief Appends a new data to a Version
         * 
         * @param user_id The ID of the user.
         * @param project_id The ID of the project.
         * @param version_number The version number to append.
         * @param total_version The total number of versions.
         * @param modulo_factor The modulo factor used for versioning.
         * @return True if the version was successfully appended, false otherwise.
         */
        virtual bool append(int user_id , int project_id,int version_number, int total_version,int modulo_factor);

        /**
         * @brief Inserts or deletes a version based on the given parameters.
         * 
         * @param user_id The ID of the user.
         * @param project_id The ID of the project.
         * @param version_number The version number.
         * @param total_version The total number of versions.
         * @param mode_insert A flag indicating whether to insert or delete.
         * @param modulo_factor The modulo factor.
         * @return True if the operation is successful, false otherwise.
         */
        virtual bool insertOrDelete(int user_id,int project_id,int version_number,int total_version ,bool mode_insert,int modulo_factor);
};



#endif
