#include "User.hpp"

User_t::User_t(){}
User_t::User_t(int userId, std::string first_name, std::string last_name) : userId(userId), first_name(first_name), last_name(last_name) {}
User_t::User_t(int userId, std::string first_name, std::string last_name, std::string city, std::string country, std::string gender)
    : userId(userId), first_name(first_name), last_name(last_name), city(city), country(country), gender(gender) {}
void User_t::Search(int Copy_intUserId)
{
}
void User_t::Show(int Copy_userId)
{
}
void User_t::AddPhoneNumber(Phone_t phoneNumber)
{
    phones.push_back(phoneNumber);
}
void User_t::AddEmail(Email_t email)
{
    emails.push_back(email);
}
void User_t::AddAddress(Address_t address)
{
    addresses.push_back(address);
}
void User_t::DeletePhoneNumber(int phoneNumberId)
{
    phones.erase(phones.begin() + phoneNumberId);
}
void User_t::DeleteEmail(int emailId)
{
    emails.erase(emails.begin() + emailId);
}
void User_t::DeleteAddress(int addressId)
{
    addresses.erase(addresses.begin() + addressId);
}
void User_t::UpdatePhoneNumber(int phoneNumberId, Phone_t newPhoneNumber)
{
    phones[phoneNumberId] = newPhoneNumber;
}
void User_t::UpdateEmail(int emailId, Email_t newEmail)
{
    emails[emailId] = newEmail;
}
void User_t::UpdateAddress(int addressId, Address_t newAddress)
{
    addresses[addressId] = newAddress;
}
void User_t::SetAddedTime(void)
{
    // current date and time on the current system
    time_t now = time(0);
    // convert now to local time
    struct tm *local_time = localtime(&now);
    // convert local_time to string form
    char *date_time = asctime(local_time);
    this->added_Time = date_time;
}
std::string User_t::GetAddedTime(void)
{
    return this->added_Time;
}
uint16_t User_t::GetUserId(void)
{
    return this->userId;
}
std::string User_t::GetFirstName(void)
{
    return this->first_name;
}
std::string User_t::GetLastName(void)
{
    return this->last_name;
}
std::string User_t::GetCity(void)
{
    return this->city;
}
std::string User_t::GetCountry(void)
{
    return this->country;
}
std::string User_t::GetGender(void)
{
    return this->gender;
}
std::vector<Phone_t> User_t::GetPhoneNumber(void)
{
    return this->phones;
}
std::vector<Email_t> User_t::GetEmail(void)
{
    return this->emails;
}
std::vector<Address_t> User_t::GetAddress(void)
{
    return this->addresses;
}
void User_t::SetFirstName(std::string first_name)
{
    this->first_name = first_name;
}
void User_t::SetLastName(std::string last_name)
{
    this->last_name = last_name;
}
void User_t::SetCity(std::string city)
{
    this->city = city;
}
void User_t::SetCountry(std::string country)
{
    this->country = country;
}
void User_t::SetGender(std::string gender)
{
    this->gender = gender;
}
void User_t::SetUserId(int userId)
{
    this->userId = userId;
}
void User_t::PrintUserPhones(void)
{
    for (int iter = 0; iter < phones.size(); iter++)
    {
        std::cout <<phones[iter];
    }
}
void User_t::PrintUserAddresses(void)
{
    for (int iter = 0; iter < addresses.size(); iter++)
    {
        std::cout <<addresses[iter];
    }
}
void User_t::PrintUserEmails(void)
{
    for (int iter = 0; iter < emails.size(); iter++)
    {
        std::cout <<addresses[iter];
    }
}
std::istream &operator>>(std::istream & InputStream, User_t & CopyUserObj)
{
    return InputStream;
}
std::ostream &operator<<(std::ostream & OutputStream, User_t & CopyUserObj)
{
    OutputStream << "User name: " << CopyUserObj.first_name << CopyUserObj.last_name << "\n";
    OutputStream << "Gender: " << CopyUserObj.gender << "\n";
    OutputStream << "Added Time: " << CopyUserObj.added_Time << "\n";
    OutputStream << "City: " << CopyUserObj.city << "\n";
    OutputStream << "Country: " << CopyUserObj.country << "\n";
    OutputStream << "Phone Numbers: ";
    CopyUserObj.PrintUserPhones();
    OutputStream << "\n";
    OutputStream << "Emails: ";
    CopyUserObj.PrintUserEmails();
    OutputStream << "\n";
    OutputStream << "Addresses: ";
    CopyUserObj.PrintUserAddresses();
    OutputStream << "\n";
    return OutputStream;
}
