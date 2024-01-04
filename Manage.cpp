#include <iostream>
#include <fstream>
#include "User.pb.h"

int main() {
  User user;

  user.set_id(1);
  user.set_name("John Doe");
  user.set_email("johndoe@example.com");
  user.set_phone("123-456-7890");

  std::fstream output("user.pb", std::ios::out | std::ios::binary);
  if (!user.SerializeToOstream(&output)) {
    std::cerr << "Failed to write user." << std::endl;
    return -1;
  }

  User user2;
  std::fstream input("user.pb", std::ios::in | std::ios::binary);
  if (!user2.ParseFromIstream(&input)) {
    std::cerr << "Failed to parse user." << std::endl;
    return -1;
  }

  std::cout << "User ID: " << user2.id() << std::endl;
  std::cout << "Name: " << user2.name() << std::endl;
  std::cout << "Email: " << user2.email() << std::endl;
  std::cout << "Phone: " << user2.phone() << std::endl;

  return 0;
}
