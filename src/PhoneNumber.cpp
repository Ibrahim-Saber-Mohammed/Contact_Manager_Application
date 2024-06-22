#include "PhoneNumber.hpp"

Phone_t::Phone_t() : phoneNumber("UNKOWN"), type("UNKOWN"), description("UNKOWN") {}
Phone_t::Phone_t(std::string phone, std::string type, std::string description)
    : phoneNumber{phone}, type{type}, description{description} {}

void Phone_t::SetPhoneNumber(const std::string &PhoneNumber)
{
    try
    {
        if (PhoneNumber.empty())
        {
            throw "Invalid Argument";
        }
        else
        {
            this->phoneNumber = PhoneNumber;
        }
    }
    catch (char *excp)
    {
        std::cout << "Caught " << excp;
    }
}
void Phone_t::SetType(const std::string &Type)
{
    this->type = Type;
}
void Phone_t::SetDescription(const std::string &Description)
{
    this->description = Description;
}
std::string Phone_t::GetPhoneNumber(void)
{
    return this->phoneNumber;
}
std::istream &operator>>(std::istream & InputStream, Phone_t & CopyPhoneObj)
{
    std::cout << "Enter User Phone Number: ";
    std::getline(std::cin, CopyPhoneObj.phoneNumber);
    std::cout << "Enter Email Type: ";
    std::getline(std::cin, CopyPhoneObj.type);
    std::cout << "Enter Email Description: ";
    std::getline(std::cin, CopyPhoneObj.description);
    return InputStream;
}
std::ostream &operator<<(std::ostream & OutputStream, Phone_t & CopyPhoneObj)
{
    OutputStream << "Phone: " << CopyPhoneObj.phoneNumber << "\n";
    OutputStream << "Type: " << CopyPhoneObj.type << "\n";
    OutputStream << "Description: " << CopyPhoneObj.description << "\n";
    return OutputStream;
}