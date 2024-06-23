#include "Contact.hpp"

Contact_t::Contact_t()
{
    // TODO: Implement the constructor to init the List and read from a file
}
Contact_t::~Contact_t()
{
}
bool Contact_t::SearchUserById(auto Copy_FoundUser, User_t &Copy_SearchUser)
{
    // REVIEW: This Function needs to be reviewd and Tested
    /* Loop over all the users in the ContactsList */
    for (auto Loopiterator = ContactsList.begin(); Loopiterator < ContactsList.end(); Loopiterator++)
    {
        /* If the userId is found then it is not valid to be used */
        if (Loopiterator->GetUserId() == Copy_SearchUser.GetUserId())
        {
            Copy_FoundUser = Loopiterator;
            /* User Id is found*/
            return true;
        }
    }
    Copy_FoundUser = ContactsList.end();
    /* If the userId is not found then it is valid to be used */
    return false; /* User Id is not found*/
}
bool Contact_t::SearchUserByName(auto Copy_FoundUser, User_t &Copy_SearchUser)
{
    // REVIEW: This Function needs to be reviewd and Tested
    /* Loop over all the users in the ContactsList */
    for (auto Loopiterator = ContactsList.begin(); Loopiterator < ContactsList.end(); Loopiterator++)
    {
        /* If the userId is found then it is not valid to be used */
        if (Loopiterator->GetFirstName() == Copy_SearchUser.GetFirstName() && Loopiterator->GetLastName() == Copy_SearchUser.GetLastName())
        {
            Copy_FoundUser = Loopiterator;
            /* User Id is found*/
            return true;
        }
    }
    Copy_FoundUser = ContactsList.end();;
    /* If the userId is not found then it is valid to be used */
    return false; /* User Id is not found*/
}
void Contact_t::SearchUser(const User_t &NewUser)
{
}
void Contact_t::AddUser(void)
{
    bool ReEnterAnotherUserFlag{true};
    User_t L_TempInputUserData;
    auto L_TempFoundUserPosition = ContactsList.end();
    while (true)
    {
        if (uint8_t UserChoice{0}; true == ReEnterAnotherUserFlag)
        {
            std::cout << " Please Provide the following Information \n";
            std::cin >> L_TempInputUserData;
            // REVIEW: This Function needs to be reviewd and Tested
            if (false == SearchUserById(L_TempFoundUserPosition, L_TempInputUserData))
            {
                ContactsList.push_back(L_TempInputUserData);
                this->UserCounts++;
                break;
            }
            else
            {
                ReEnterAnotherUserFlag = false;
            }
        }
        else
        {
            std::cout << "User ID is already taken \n";
            std::cout << " 1- Enter another User ID \n";
            std::cout << " 2- Cancel \n";
            // TODO: Check User Input
            std::cin >> UserChoice;
            if (UserChoice == 1)
            {
                ReEnterAnotherUserFlag = true;
            }
            else if (UserChoice == 2)
            {
                break;
            }
            else
            {
                ReEnterAnotherUserFlag = false;
            }
        }
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
void Contact_t::ShowAll(void)
{
}
void Contact_t::SaveToFile(std::string filename)
{
}
void Contact_t::LoadFromFile(std::string filename)
{
}