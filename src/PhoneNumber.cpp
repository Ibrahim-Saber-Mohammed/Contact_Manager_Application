#include "PhoneNumber.hpp"

Phone_t::Phone_t(std::string phone = "UNKOWN", std::string type = "UNKOWN", std::string description = "UNKOWN")
    : phoneNumber{phone}, type{type}, description{description} {}

void Phone_t::SetPhoneNumber(const std::string &PhoneNumber)
{
    this->phoneNumber = PhoneNumber;
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