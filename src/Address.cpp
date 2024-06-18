#include <Address.hpp>

Address_t::Address_t(std::string place = "UNKOWN", std::string type = "UNKOWN", std::string description = "UNKOWN")
    : place{place}, type{type}, description{description} {}
void Address_t::SetAddress(const std::string &Place)
{
    this->place = Place;
}
void Address_t::SetType(const std::string &Type)
{
    this->type = Type;
}
void Address_t::SetDescription(const std::string &Description)
{
    this->description = Description;
}
std::string Address_t::GetAddress(void)
{
    return this->place;
}