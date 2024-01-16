#ifndef PROJECT_HPP
#define PROJECT_HPP
#include<bits/stdc++.h>
using namespace std;
#include "../protobufs/project.pb.h"
class Projects{
    private:
        string project_file;
        projectPortal portal;
        Project project;
        int user_id;
        virtual void loadProjectData();
    public:
        /**
         * Constructor for Projects.
         * This method is used to construct the Projects object.
         */
        Projects();
        /**
         * Initializes the project.
         * This method is used to set the user id and file names.
         * @param user_id The user id to be set.
         * @return true if initialization is successful, false otherwise.
         */
        virtual bool init(int user_id);
        /**
         * Creates a new project.
         * This method is used to create a new project.
         * @param projects_count The number of projects the user has.
         * @return true if project creation is successful, false otherwise.
         */
        virtual bool create(int projects_count);
        /**
         * Lists all projects.
         * This method is used to list all projects.
         */        
        virtual void list();

        /**
         * @brief Update the project Version number and Total number of versions
         * @param project_id 
         * @param total_version 
         * @return true if the update is successful via saveState() method
         * @return false if the update is unsuccessful
         */
        virtual bool updateVersionAndTotal(int project_id, int total_version);

        /**
         * @brief Updates the total version number of a project.
         * 
         * This function updates the total version number of the project with the specified ID.
         * 
         * @param project_id The ID of the project.
         * @param new_total_version_number The new total version number to be set.
         * @return True if the update is successful via saveState, false otherwise.
         */
        virtual bool updateTotalVersion(int project_id, int new_total_version_number);

        /**
         * Checks if there exists a project or not.
         * This method is used to check if the project is empty.
         * @return true if the project is empty, false otherwise.
         */
        virtual bool isEmpty();
        /**
         * Saves the state of the project.
         * This method is used to save the state of the project.
         * @return true if the state is saved, false otherwise.
         */
        virtual bool saveState();

        /**
         * Verify project ID.
         * This method is used to find out the project id is given exists in records.
         * @param id The project id to be set.
         * @return the version of the project.
         */
        virtual bool verifyProjectID(int id);

        
        /**
         * @brief Retrieves information for all projects.
         * 
         * This function retrieves information for all projects .
         * It is a virtual function that needs to be implemented by derived classes.
         */
        virtual void getAllProjectsInfo();

        /**
         * @brief Retrieves the current version of a project.
         * 
         * This function retrieves the current version of a project.
         * It is a virtual function that needs to be implemented by derived classes.
         * 
         * @param id The ID of the project.
         * @return The current version of the project.
         */
        virtual int getVersion(int id);

        /**
         * @brief Retrieves the total number of versions of a project.
         * 
         * This function retrieves the total number of versions of a project.
         * It is a virtual function that needs to be implemented by derived classes.
         * 
         * @param id The ID of the project.
         * @return The total number of versions of the project.
         */
        virtual int getTotalVersion(int id);

        /**
         * @brief Retrieves the modulo factor of a project.
         * 
         * This function retrieves the modulo factor of a project.
         * It is a virtual function that needs to be implemented by derived classes.
         * 
         * @param id The ID of the project.
         * @return The modulo factor of the project.
         */
        virtual int getModuloFactor(int id);
        
        /**
         * @brief This function is used to revert the versions of a project to a previous version.
         * 
         * @param user_id User ID of the user who is reverting the project.
         * @param project_id Project ID of the project to be reverted.
         * @param version_id Version ID of the project to be reverted.
         * @param total_version Total number of versions of the project.
         * @return true if the project revert is successful via saveState,
         * @return false otherwise. 
         */
        virtual bool revert(int user_id , int project_id , int version_id,int total_version);

};


#endif //PROJECT_HPP