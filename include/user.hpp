#ifndef USER_HPP
#define USER_HPP
#include "fileoperations.hpp"
#include "../protobufs/user.pb.h"
// #define users_file "Users.dat"
#define endl "\n";
const string users_file = "users.dat";


class Users{
    User user;
    UserPortal users;
    int total_accounts =-1;
    /**
     * @brief Its a hash functoin to hash the password
     * 
     * @param str 
     * @return string It will return the hashed value of the password
     */
    virtual string hashPassword(const char *str);

    /**
     * @brief Checks if the account exists or not
     * 
     * @param str 
     * @return true if the account exists
     * @return false if the account does not exist
     */
    virtual bool accountExists(const char *str);


    /**
     * @brief Fetches the user data from the file
     * 
     * @return string It will return the serialized user data
     */
    virtual string fetchUserData();

    /**
     * @brief Loads the user data from the file , and store it in the users object
     * 
     */
    virtual void loadUserData();

    /**
     * @brief Returns the total number of accounts
     * 
     * @return int 
     */
    virtual int totalAccount();

    public:
        bool logged_in = false;

        /**
         * @brief Construct a new Users object
         * 
         */
        Users(){
            fileOperations::fileExists(users_file);
        }

        /**
         * @brief Login the user with the given username and password
         * 
         * @param username 
         * @param password 
         * @return true if the login is successful
         * @return false if the login is unsuccessful
         */
        virtual bool Login(string username, string password);

        /**
         * @brief Creates a new user
         * 
         * @param name 
         * @param location
         * @param email 
         * @param password 
         * @return true if the user is created successfully
         * @return false if the user is not created successfully
         */

        virtual bool registerUser(const char* name, const char* location, const char* email, const char* password) ;

        /**
         * @brief logout current user & flush the user object
         * @return true if the logout is successful
         * @return false if the logout is unsuccessful
         */
        virtual bool logout();

        /**
         * @brief Returns the current logged in user's name
         * 
         * @return String user's name
         */
        virtual string getName();

        /**
         * @brief Returns the current logged in user's id
         * 
         * @return int user's id
         */
        virtual int getId();

        /**
         * @brief Returns the current logged in user's projects count
         * 
         * @return int user's project count
         */
        virtual int getProjectCount(int user_id);

        /**
         * @brief Updates the project count of the user by incrementing it by 1
         * 
         * @param user_id 
         * @return true if the update is successful
         * @return false if the update is unsuccessful
         */
        virtual bool updateProjectCount(int user_id);

        /**
         * @brief Prints the user information
         * 
         */
        virtual void info();
};



#endif // USER_HPP