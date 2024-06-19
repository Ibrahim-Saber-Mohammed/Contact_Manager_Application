#include <Address.hpp>
#include <exception>

Address_t::Address_t() : place("UNKNOWN"), type("UNKNOWN"), description("UNKNOWN") {}
Address_t::Address_t(std::string place, std::string type, std::string description)
    : place{place}, type{type}, description{description} {}
void Address_t::SetAddress(const std::string &Place)
{
    if (Place.empty())
    {
        try
        {
            throw "Invalid Argument";
        }
        catch (char *excp)
        {
            std::cout << "Caught " << excp;
        }
    }

    else
    {
        this->place = Place;
    }
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