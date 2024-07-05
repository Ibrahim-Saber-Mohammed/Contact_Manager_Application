#ifndef ADDRESS_CLASS_HPP__
#define ADDRESS_CLASS_HPP__

#include <string>
#include <iostream>
#include <iomanip>
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
    friend std::istream &operator>>(std::istream &InputStream, Address_t & CopyAddressObj);
    friend std::ostream &operator<<(std::ostream &OutputStream, Address_t & CopyAddressObj);
};
#endif