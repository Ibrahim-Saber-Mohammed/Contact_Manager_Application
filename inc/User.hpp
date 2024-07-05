#ifndef USER_CLASS_HPP__
#define USER_CLASS_HPP__

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include "PhoneNumber.hpp"
#include "Address.hpp"
#include "Email.hpp"
class User_t
{
private:
    uint16_t userId;
    std::string first_name;
    std::string last_name;
    std::string gender;
    std::string added_Time;
    std::vector<Phone_t> phones;
    std::vector<Email_t> emails;
    std::vector<Address_t> addresses;
    friend std::istream &operator>>(std::istream &InputStream, User_t &CopyUserObj);
    friend std::ostream &operator<<(std::ostream &OutputStream, User_t &CopyUserObj);
public:
    User_t();
    User_t(int userId, std::string first_name, std::string last_name);
    User_t(int userId, std::string first_name, std::string last_name, std::string gender);
    void Search(int Copy_intUserId);
    void Show(int Copy_userId);
    void AddPhoneNumber(void);
    void AddEmail(void);
    void AddAddress(void);
    void DeletePhoneNumber(int phoneNumber);
    void DeleteEmail(int email);
    void DeleteAddress(int address);
    void UpdatePhoneNumber(int phoneNumberId, Phone_t newPhoneNumber);
    void UpdateEmail(int emailId, Email_t newEmail);
    void UpdateAddress(int addressId, Address_t newAddress);
    void SetAddedTime(void);
    std::string GetAddedTime(void);
    uint16_t GetUserId(void);
    std::string GetFirstName(void);
    std::string GetLastName(void);
    std::string GetGender(void);
    std::vector<Phone_t> GetPhoneNumber(void);
    std::vector<Email_t> GetEmail(void);
    std::vector<Address_t> GetAddress(void);
    void SetFirstName(std::string first_name);
    void SetLastName(std::string last_name);
    void SetGender(std::string gender);
    void SetUserId(int userId);
    void PrintUserEmails(void);
    void PrintUserAddresses(void);
    void PrintUserPhones(void);
};

#endif
