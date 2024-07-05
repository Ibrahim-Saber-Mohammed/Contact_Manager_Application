#include <Address.hpp>
#include <exception>

Address_t::Address_t() : place("UNKNOWN"), type("UNKNOWN"), description("UNKNOWN") {}
Address_t::Address_t(std::string place, std::string type, std::string description)
    : place{place}, type{type}, description{description} {}
void Address_t::SetAddress(const std::string &Place)
{
    try
    {
        if (Place.empty())
        {
            throw "Invalid Argument";
        }
        else
        {
            this->place = Place;
        }
    }
    catch (char *excp)
    {
        std::cout << "Caught " << excp;
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
std::istream &operator>>(std::istream &InputStream, Address_t &CopyAddressObj)
{
    std::cout << "Enter User Address: ";
    std::getline(std::cin, CopyAddressObj.place);
    std::cout << "Enter Address Type: ";
    std::getline(std::cin, CopyAddressObj.type);
    std::cout << "Enter Address Description: ";
    std::getline(std::cin, CopyAddressObj.description);
    return InputStream;
}
std::ostream &operator<<(std::ostream &OutputStream, Address_t &CopyAddressObj)
{
    OutputStream <<std::left<<std::setw(30)<< "Place: " << CopyAddressObj.place << "\n";
    OutputStream <<std::left<<std::setw(30)<< "Type: " << CopyAddressObj.type << "\n";
    OutputStream <<std::left<<std::setw(30)<< "Description: " << CopyAddressObj.description << "\n";
    return OutputStream;
}