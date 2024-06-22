#include "Contact.hpp"

Contact_t::Contact_t()
{
    // TODO: Implement the constructor to init the List and read from a file

}
Contact_t::~Contact_t()
{
}
bool IsValidUserId()
{
    // TODO: Implement IsValid UserID to check if the ID is availabls or No
    
}
void Contact_t::AddUser(void)
{
    std::cout << " Please Provide the following Information \n";
    User_t L_TempUser;
    std::cin >> L_TempUser;
    if (IsValidUserId())
    {
        // REVIEW: Save User Data
        ContactsList.push_back(L_TempUser);
        UserCounts++;
    }
    else
    {
        std::cout << "User ID is already taken \n";
        std::cout << " 1- Enter another USer ID \n";
        std::cout << " 2- Cancel \n";
        // TODO: Check User Input
    }
}
void Contact_t::EditUser(const User_t &NewUser)
{
    // TODO: Take an option from the user represents the feild to be edited
}
void Contact_t::DeleteUser(const User_t &NewUser)
{
    // TODO: Take an option from the user represents the user to be deleted
}
int Contact_t::CountUsers(void)
{
    return this->UserCounts;
}
void Contact_t::SearchUserById(const User_t &NewUser)
{
}
void Contact_t::SearchUserByName(const User_t &NewUser)
{
}
void Contact_t::ShowAll(void)
{
}
void Contact_t::SaveToFile(std::string filename)
{
}
void Contact_t::LoadFromFile(std::string filename)
{
}