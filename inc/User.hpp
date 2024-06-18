#ifndef USER_CLASS_HPP__
#define USER_CLASS_HPP__

#include <vector>
#include <string>
#include <ctime>

#include "PhoneNumber.hpp"
#include "Address.hpp"
#include "Email.hpp"

/**
 * // current date and time on the current system
   time_t now = time(0);

   // convert now to local time
   struct tm *local_time = localtime(&now);

   // convert local_time to string form
   char* date_time = asctime(local_time);
 */
class User_t
{
private:
    int userId;
    std::string first_name;
    std::string last_name;
    std::string city;
    std::string country;
    std::string gender;
    std::string added_Time;
    std::vector<Phone_t> phones;
    std::vector<Email_t> emails;
    std::vector<Address_t> addresses;

public:
    User_t(int userId, std::string first_name, std::string last_name);
    User_t(int userId, std::string first_name, std::string last_name, std::string city, std::string country, std::string gender);
    void Search(int Copy_intUserId);
    void Show(int Copy_userId);
    void AddPhoneNumber(Phone_t phoneNumber);
    void AddEmail(Email_t email);
    void AddAddress(Address_t address);
    void DeletePhoneNumber(int phoneNumber);
    void DeleteEmail(int email);
    void DeleteAddress(int address);
    void UpdatePhoneNumber(int phoneNumberId, Phone_t newPhoneNumber);
    void UpdateEmail(int emailId, Email_t newEmail);
    void UpdateAddress(int addressId, Address_t newAddress);
    void SetAddedTime(void);
    std::string GetAddedTime(void);
    int GetUserId(void);
    std::string GetFirstName(void);
    std::string GetLastName(void);
    std::string GetCity(void);
    std::string GetCountry(void);
    std::string GetGender(void);
    std::vector<Phone_t> GetPhoneNumber(void);
    std::vector<Email_t> GetEmail(void);
    std::vector<Address_t> GetAddress(void);
    void SetFirstName(std::string first_name);
    void SetLastName(std::string last_name);
    void SetCity(std::string city);
    void SetCountry(std::string country);
    void SetGender(std::string gender);
    void SetUserId(int userId);
};


#endif
