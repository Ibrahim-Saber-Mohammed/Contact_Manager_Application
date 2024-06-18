#ifndef EMAIL_CLASS_HPP__
#define EMAIL_CLASS_HPP__

#include <string>

class Email_t
{
private:
    std::string email;
    std::string type;
    std::string description;

public:
    Email_t(std::string email, std::string type, std::string description);
    void SetEmail(const std::string &Email);
    void SetType(const std::string &Type);
    void SetDescription(const std::string &Description);
    std::string GetEmail(void);
};

#endif