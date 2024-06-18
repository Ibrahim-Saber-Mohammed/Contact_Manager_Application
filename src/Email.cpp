#include "Email.hpp"

Email_t::Email_t(std::string email = "UNKOWN", std::string type = "UNKOWN", std::string description = "UNKOWN")
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