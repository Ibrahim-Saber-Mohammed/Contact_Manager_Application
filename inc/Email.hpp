#ifndef EMAIL_CLASS_HPP__
#define EMAIL_CLASS_HPP__

#include <iostream>
#include <string>

class Email_t
{
private:
    std::string email;
    std::string type;
    std::string description;

public:
    Email_t();
    Email_t(std::string email, std::string type, std::string description);
    void SetEmail(const std::string &Email);
    void SetType(const std::string &Type);
    void SetDescription(const std::string &Description);
    std::string GetEmail(void);
    friend std::istream &operator>>(std::istream InputStream, Email_t CopyEmailObj);
    friend std::ostream &operator<<(std::ostream OutputStream, Email_t CopyEmailObj);
};

#endif