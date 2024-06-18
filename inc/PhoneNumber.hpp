#ifndef PHONE_NUMBER_CLASS_HPP__
#define PHONE_NUMBER_CLASS_HPP__

#include <string>

class Phone_t
{
private:
    std::string phoneNumber;
    std::string type;
    std::string description;

public:
    Phone_t(std::string phone, std::string type, std::string description);
    void SetPhoneNumber(const std::string &PhoneNumber);
    void SetType(const std::string &Type);
    void SetDescription(const std::string &Description);
    std::string GetPhoneNumber(void);
};

#endif