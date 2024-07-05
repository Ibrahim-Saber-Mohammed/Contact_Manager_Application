#include "Email.hpp"

Email_t::Email_t() : email("UNKOWN"), type("UNKOWN"), description("UNKOWN") {}
Email_t::Email_t(std::string email, std::string type, std::string description)
    : email{email}, type{type}, description{description} {}

void Email_t::SetEmail(const std::string &Email)
{
    this->email = Email;
}
void Email_t::SetType(const std::string &Type)
{
    this->type = Type;
}
void Email_t::SetDescription(const std::string &Description)
{
    this->description = Description;
}
std::string Email_t::GetEmail(void)
{
    return this->email;
}
std::istream &operator>>(std::istream &InputStream, Email_t &CopyEmailObj)
{
    std::cout << "Enter User Email: ";
    std::getline(std::cin, CopyEmailObj.email);
    std::cout << "Enter Email Type: ";
    std::getline(std::cin, CopyEmailObj.type);
    std::cout << "Enter Email Description: ";
    std::getline(std::cin, CopyEmailObj.description);
    return InputStream;
}
std::ostream &operator<<(std::ostream &OutputStream, Email_t &CopyEmailObj)
{
    OutputStream <<std::left<<std::setw(30)<< "Email: " << CopyEmailObj.email << "\n";
    OutputStream <<std::left<<std::setw(30)<< "Type: " << CopyEmailObj.type << "\n";
    OutputStream <<std::left<<std::setw(30)<< "Description: " << CopyEmailObj.description << "\n";
    return OutputStream;
}