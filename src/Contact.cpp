#include "Contact.hpp"
#include "User.hpp"
Contact_t::Contact_t()
{
    // TODO: Implement the constructor to init the List and read from a file
}
Contact_t::~Contact_t()
{
}
bool Contact_t::SearchUserById(auto Copy_FoundUser, uint16_t &Copy_SearchUser)
{
    // REVIEW: This Function needs to be reviewd and Tested
    /* Loop over all the users in the ContactsList */
    for (auto Loopiterator = ContactsList.begin(); Loopiterator < ContactsList.end(); Loopiterator++)
    {
        /* If the userId is found then it is not valid to be used */
        if (Loopiterator->GetUserId() == Copy_SearchUser)
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
bool Contact_t::SearchUserByName(auto Copy_FoundUser, std::string &Copy_SearchUser)
{
    // REVIEW: This Function needs to be reviewd and Tested
    /* Loop over all the users in the ContactsList */
    for (auto Loopiterator = ContactsList.begin(); Loopiterator < ContactsList.end(); Loopiterator++)
    {
        std::string FullName = Loopiterator->GetFirstName() + ' ' + Loopiterator->GetLastName();
        /* If the userId is found then it is not valid to be used */
        if (FullName == Copy_SearchUser)
        {
            Copy_FoundUser = Loopiterator;
            /* User Id is found*/
            return true;
        }
    }
    Copy_FoundUser = ContactsList.end();
    ;
    /* If the userId is not found then it is valid to be used */
    return false; /* User Id is not found*/
}
void Contact_t::SearchUser(void)
{
    uint16_t Option{};
    bool ReEnterAnotherOption{true};
    auto L_TempFoundUserPosition = ContactsList.end();
    while (ReEnterAnotherOption)
    {
        std::cout << "Please Select one of the following Options \n";
        std::cout << " 1- Search user by ID \n";
        std::cout << " 2- Search user by Name \n";
        std::cout << " 3- Exit \n";
        std::cin >> Option;
        switch (Option)
        {
        case 1:
        {
            uint16_t SearchUserID{};
            std::cout << "Please Enter the User ID to search for \n";
            std::cin >> SearchUserID;
            if (SearchUserById(L_TempFoundUserPosition, SearchUserID))
            {
                std::cout << "User has been Found...\n";
                std::cout << *(L_TempFoundUserPosition);
            }
            else
            {
                std::cout << "User has not been Found...\n";
            }
            ReEnterAnotherOption = false;
        }
        break;
        case 2:
        {
            std::string UserFullName{};
            std::cout << "Please Enter the User Name to search for \n";
            std::getline(std::cin, UserFullName);
            if (SearchUserByName(L_TempFoundUserPosition, UserFullName))
            {
                std::cout << "User has been Found...\n";
                std::cout << *(L_TempFoundUserPosition);
            }
            else
            {
                std::cout << "User has not been Found...\n";
            }
            ReEnterAnotherOption = false;
        }
        break;
        case 3:
        {
            std::cout << "Thank you for using the program \n";
            ReEnterAnotherOption = false;
        }
        break;
        default:
            ReEnterAnotherOption = true;
            std::cout << "Inavlid Option....\n";
            std::cout << "Please try again \n";
            break;
        }
    }
}
void Contact_t::AddUser(void)
{
    bool ReEnterAnotherUserFlag{true};
    User_t L_TempInputUserData;
    auto L_TempFoundUserPosition = ContactsList.end();
    while (true)
    {
        if (uint16_t UserChoice{0}; true == ReEnterAnotherUserFlag)
        {
            std::cout << " Please Provide the following Information \n";
            std::cin >> L_TempInputUserData;
            uint16_t SearchId = L_TempInputUserData.GetUserId();
            // REVIEW: This Function needs to be reviewd and Tested
            if (false == SearchUserById(L_TempFoundUserPosition, SearchId))
            {
                ContactsList.push_back(L_TempInputUserData);
                std::cout << " User Added Successfully \n";
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
            // REVIEW: Check User Input
            std::cin >> UserChoice;
            if (UserChoice == 1)
            {
                ReEnterAnotherUserFlag = true;
            }
            else if (UserChoice == 2)
            {
                std::cout << "Closing the Adding User Functionality.\n";
                break;
            }
            else
            {
                std::cout << " Invalid Input \n";
                ReEnterAnotherUserFlag = false;
            }
        }
    }
}
void Contact_t::EditUser(void)
{
    // TODO: Take an option from the user represents the feild to be edited
    uint16_t Option{};
    bool ReEnterAnotherOption{true};
    auto L_TempFoundUserPosition = ContactsList.end();
    while (ReEnterAnotherOption)
    {
        std::cout << "Please Select one of the following Options \n";
        std::cout << " 1- Search user by ID \n";
        std::cout << " 2- Exit \n";
        std::cin >> Option;
        switch (Option)
        {
        case 1:
        {
            uint16_t SearchUserID{};
            std::cout << "Please Enter the User ID to search for \n";
            std::cin >> SearchUserID;
            if (SearchUserById(L_TempFoundUserPosition, SearchUserID))
            {
                std::cout << "User has been Found...\n";
                ReEnterAnotherOption = false;
                // TODO: Implement the Editing Process
            }
            else
            {
                std::cout << "User has not been Found...\n";
                ReEnterAnotherOption = true;
            }
        }
        break;
        case 3:
        {
            std::cout << "Thank you for using the program \n";
            ReEnterAnotherOption = false;
        }
        break;
        default:
            ReEnterAnotherOption = true;
            std::cout << "Inavlid Option....\n";
            std::cout << "Please try again \n";
            break;
        }
    }
}
void Contact_t::DeleteUser(void)
{
    // TODO: Take an option from the user represents the user to be deleted
    uint16_t Option{};
    bool ReEnterAnotherOption{true};
    auto L_TempFoundUserPosition = ContactsList.end();
    while (ReEnterAnotherOption)
    {
        std::cout << "Please Select one of the following Options \n";
        std::cout << " 1- Search user by ID \n";
        std::cout << " 2- Exit \n";
        std::cin >> Option;
        switch (Option)
        {
        case 1:
        {
            uint16_t SearchUserID{};
            std::cout << "Please Enter the User ID to search for \n";
            std::cin >> SearchUserID;
            if (SearchUserById(L_TempFoundUserPosition, SearchUserID))
            {
                ContactsList.erase(L_TempFoundUserPosition);
                ReEnterAnotherOption = false;
                std::cout << " User Deleted Successfully \n";
                // TODO: Implement the removing Process
            }
            else
            {
                std::cout << "User has not been Found...\n";
                ReEnterAnotherOption = true;
            }
        }
        break;
        case 3:
        {
            std::cout << "Thank you for using the program \n";
            ReEnterAnotherOption = false;
        }
        break;
        default:
            ReEnterAnotherOption = true;
            std::cout << "Inavlid Option....\n";
            std::cout << "Please try again \n";
            break;
        }
    }
}
int Contact_t::CountUsers(void)
{
    return this->UserCounts;
}
void Contact_t::ShowAll(void)
{
    std::cout << "===================================================================\n";
    for (auto &User : ContactsList)
    {
        std::cout << User;
    }
    std::cout << "===================================================================\n";
}
void Contact_t::SaveToFile(std::string filename)
{
}
void Contact_t::LoadFromFile(std::string filename)
{
}