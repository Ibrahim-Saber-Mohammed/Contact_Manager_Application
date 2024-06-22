#ifndef CONTACT_CLASS_HPP__
#define CONTACT_CLASS_HPP__
#include <iostream>
#include <vector>
#include <string>
#include "User.hpp"

class Contact_t
{
private:
    std::vector<User_t> ContactsList;
    int UserCounts;

public:
    Contact_t();
    ~Contact_t();
    void AddUser(void);
    void EditUser(const User_t &NewUser);
    void DeleteUser(const User_t &NewUser);
    int CountUsers(void);
    void SearchUserById(const User_t &NewUser);
    void SearchUserByName(const User_t &NewUser);
    void ShowAll(void);
    void SaveToFile(std::string filename);
    void LoadFromFile(std::string filename);
};

#endif