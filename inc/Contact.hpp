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
    uint16_t UserCounts;
    bool IsFoundUserId(const uint16_t Copy_UserId);
    bool SearchUserById(auto Copy_FoundUser, uint16_t &Copy_User);
    bool SearchUserByName(auto Copy_FoundUser, std::string &Copy_SearchUser);

public:
    Contact_t();
    ~Contact_t();
    void AddUser(void);
    void EditUser(void);
    void DeleteUser(void);
    int CountUsers(void);
    void SearchUser(void);
    void ShowAll(void);
    void SaveToFile(std::string filename);
    void LoadFromFile(std::string filename);
};

#endif