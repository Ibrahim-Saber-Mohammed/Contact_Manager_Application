#ifndef ADDRESS_CLASS_HPP__
#define ADDRESS_CLASS_HPP__

#include <string>
#include <iostream>
class Address_t
{
private:
    std::string place;
    std::string type;
    std::string description;

public:
    Address_t();
    Address_t(std::string place, std::string type, std::string description);
    void SetAddress(const std::string &Place);
    void SetType(const std::string &Type);
    void SetDescription(const std::string &Description);
    std::string GetAddress(void);
};

#endif