#ifndef USER_CLASS_HPP__
#define USER_CLASS_HPP__

#include <vector>
#include <string>
#include <ctime>

#include "PhoneNumber.hpp"
#include "Address.hpp"
#include "Email.hpp"

/**
 * // current date and time on the current system
   time_t now = time(0);

   // convert now to local time
   struct tm *local_time = localtime(&now);

   // convert local_time to string form
   char* date_time = asctime(local_time);
 */
class User_t
{
private:
    int userId;
    std::string first_name;
    std::string last_name;
    std::string city;
    std::string country;
    std::string gender;
    std::string added_Time;
    std::vector<Phone_t> phones;
    std::vector<Email_t> emails;
    std::vector<Address_t> addresses;

public:
    User_t(int userId, std::string first_name, std::string last_name);
    User_t(int userId, std::string first_name, std::string last_name, std::string city, std::string country, std::string gender);
    void Search(int Copy_intUserId);
    void Show(int Copy_userId);
    void AddPhoneNumber(Phone_t phoneNumber);
    void AddEmail(Email_t email);
    void AddAddress(Address_t address);
    void DeletePhoneNumber(int phoneNumber);
    void DeleteEmail(int email);
    void DeleteAddress(int address);
    void UpdatePhoneNumber(int phoneNumberId, Phone_t newPhoneNumber);
    void UpdateEmail(int emailId, Email_t newEmail);
    void UpdateAddress(int addressId, Address_t newAddress);
    void SetAddedTime(void);
    std::string GetAddedTime(void);
    int GetUserId(void);
    std::string GetFirstName(void);
    std::string GetLastName(void);
    std::string GetCity(void);
    std::string GetCountry(void);
    std::string GetGender(void);
    std::vector<Phone_t> GetPhoneNumber(void);
    std::vector<Email_t> GetEmail(void);
    std::vector<Address_t> GetAddress(void);
    void SetFirstName(std::string first_name);
    void SetLastName(std::string last_name);
    void SetCity(std::string city);
    void SetCountry(std::string country);
    void SetGender(std::string gender);
    void SetUserId(int userId);
};

/*
// Component 2: The User
class User {
private:
    int id;
    string firstname;
    string lastname;
    string gender;
    string city;
    string addedDate;
    vector<Address> addresses;
    vector<Email> emails;
    vector<Phone> phones;

public:
    User(int id = 0, string firstname = "", string lastname = "", string gender = "", string city = "", string addedDate = "")
        : id(id), firstname(firstname), lastname(lastname), gender(gender), city(city), addedDate(addedDate) {}

    void addAddress(Address address) { addresses.push_back(address); }
    void addEmail(Email email) { emails.push_back(email); }
    void addPhone(Phone phone) { phones.push_back(phone); }

    void editAddress(int index, Address address) { addresses[index] = address; }
    void editEmail(int index, Email email) { emails[index] = email; }
    void editPhone(int index, Phone phone) { phones[index] = phone; }

    void deleteAddress(int index) { addresses.erase(addresses.begin() + index); }
    void deleteEmail(int index) { emails.erase(emails.begin() + index); }
    void deletePhone(int index) { phones.erase(phones.begin() + index); }

    int search(string data) {
        if (firstname.find(data) != string::npos || lastname.find(data) != string::npos ||
            gender.find(data) != string::npos || city.find(data) != string::npos ||
            addedDate.find(data) != string::npos) {
            return 1;
        }
        for (Address address : addresses) {
            if (address.getAddress().find(data) != string::npos) {
                return 1;
            }
        }
        for (Email email : emails) {
            if (email.getEmail().find(data) != string::npos) {
                return 1;
            }
        }
        for (Phone phone : phones) {
            if (phone.getPhone().find(data) != string::npos) {
                return 1;
            }
        }
        return 0;
    }

    void show() {
        cout << "ID: " << id << endl;
        cout << "Firstname: " << firstname << endl;
        cout << "Lastname: " << lastname << endl;
        cout << "Gender: " << gender << endl;
        cout << "City: " << city << endl;
        cout << "Added Date: " << addedDate << endl;
        cout << "Addresses:" << endl;
        for (Address address : addresses) {
            cout << address.getAddress() << endl;
        }
        cout << "Emails:" << endl;
        for (Email email : emails) {
            cout << email.getEmail() << endl;
        }
        cout << "Phones:" << endl;
        for (Phone phone : phones) {
            coutHere is the UML diagram for the Contact Manager Application:
 */
/*
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

// ... (previous code)

// Component 1: The Contact
class Contact {
private:
    vector<User> users;

public:
    void addUser(User user) { users.push_back(user); }
    void deleteUser(int index) { users.erase(users.begin() + index); }
    void editUser(int index, User user) { users[index] = user; }
    User searchUser(string data) {
        for (User user : users) {
            if (user.search(data)) {
                return user;
            }
        }
        return User();
    }
    void showAllUsers() {
        for (User user : users) {
            user.show();
            cout << endl;
        }
    }
    void save(string filename) {
        ofstream out(filename);
        if (out.is_open()) {
            for (User user : users) {
                out << user.getId() << endl;
                out << user.getFirstname() << endl;
                out << user.getLastname() << endl;
                out << user.getGender() << endl;
                out << user.getCity() << endl;
                out << user.getAddedDate() << endl;
                out << user.getAddresses().size() << endl;
                for (Address address : user.getAddresses()) {
                    out << address.getPlace() << endl;
                    out << address.getType() << endl;
                    out << address.getDescription() << endl;
                }
                out << user.getEmails().size() << endl;
                for (Email email : user.getEmails()) {
                    out << email.getEmail() << endl;
                    out << email.getType() << endl;
                    out << email.getDescription() << endl;
                }
                out << user.getPhones().size() << endl;
                for (Phone phone : user.getPhones()) {
                    out << phone.getPhone() << endl;
                    out << phone.getType() << endl;
                    out << phone.getDescription() << endl;
                }
                out << endl;
            }
            out.close();
        }
    }
    void load(string filename) {
        ifstream in(filename);
        if (in.isSure, here is the updated code with the save and load functions:

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

//... (previous code)

// Component 1: The Contact
class Contact {
private:
    vector<User> users;

public:
    void addUser(User user) { users.push_back(user); }
    void deleteUser(int index) { users.erase(users.begin() + index); }
    void editUser(int index, User user) { users[index] = user; }
    User searchUser(string data) {
        for (User user : users) {
            if (user.search(data)) {
                return user;
            }
        }
        return User();
    }
    void showAllUsers() {
        for (User user : users) {
            user.show();
            cout << endl;
        }
    }
    void save(string filename) {
        ofstream out(filename);
        if (out.is_open()) {
            for (User user : users) {
                out << user.getId() << endl;
                out << user.getFirstname() << endl;
                out << user.getLastname() << endl;
                out << user.getGender() << endl;
                out << user.getCity() << endl;
                out << user.getAddedDate() << endl;
                out << user.getAddresses().size() << endl;
                for (Address address : user.getAddresses()) {
                    out << address.getPlace() << endl;
                    out << address.getType() << endl;
                    out << address.getDescription() << endl;
                }
                out << user.getEmails().size() << endl;
                for (Email email : user.getEmails()) {
                    out << email.getEmail() << endl;
                    out << email.getType() << endl;
                    out << email.getDescription() << endl;
                }
                out << user.getPhones().size() << endl;
                for (Phone phone : user.getPhones()) {
                    out << phone.getPhone() << endl;
                    out << phone.getType() << endl;
                    out << phone.getDescription() << endl;
                }
                out << endl;
            }
            out.close();
        }
    }
    void load(string filename) {
        ifstream in(filename);
        if (in.is_open()) {
            string line;
            while (getline(in, line)) {
                if (!line.empty()) {
                    User user;
                    user.setId(stoi(line));
                    getline(in, line);
                    user.setFirstname(line);
                    getline(in, line);
                    user.setLastname(line);
                    getline(in, line);
                    user.setGender(line);
                    getline(in, line);
                    user.setCity(line);
                    getline(in, line);
                    user.setAddedDate(line);
                    int addressCount;
                    getline(in, line);
                    addressCount = stoi(line);
                    for (int i = 0; i < addressCount; i++) {
                        Address address;
                        getline(in, line);
                        address.setPlace(line);
                        getline(in, line);
                        address.setType(line);
                        getline(in, line);
                        address.setDescription(line);
                        user.addAddress(address);
                    }
                    int emailCount;
                    getline(in, line);
                    emailCount = stoi(line);
                    for (int i = 0; i < emailCount; i++) {
                        Email email;
                        getline(in, line);
                        email.setEmail(line);
                        getline(in, line);
                        email.setType(line);
                        getline(in, line);
                        email.setDescription(line);
                        user.addEmail(email);
                    }
                    int phoneCount;
                    getline(in, line);
                    phoneCount = stoi(line);
                    for (int i = 0; i < phoneCount; i++) {
                        Phone phone;
                        getline(in, line);
                        phone.setPhone(line);
                        getline(in, line);
                        phone.setType(line);
                        getline(in, line);
                        phone.setDescription(line);
                        user.addPhone(phone);
                    }
                    addUser(user);
                }
            }
            in.close();
        }
    }
};

int main() {
    Contact contact;
    int choice;
    while (true) {
        cout << "1. Add User" << endl;
        cout << "2. Delete User" << endl;
        cout << "3. Edit User" << endl;
        cout << "4. Search User" << endl;
        cout << "5. Show All Users" << endl;
        cout << "6. Save Contact List" << endl;
        cout << "7. Load Contact List" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                User user;
                //... (get user data from user)
                contact.addUser(user);
                break;
            }
            case 2: {
                int index;
                //... (get index from user)
                contact.deleteUser(index);
                break;
            }
            case 3: {
                int index;
                */
#endif