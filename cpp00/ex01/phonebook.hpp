#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <limits>
# include <iomanip>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        int phone_number;
        std::string secret;
    
    public:
        Contact();
        void setContact(std::string first_name, 
                 std::string last_name,
                 std::string nick_name,
                 int phone_number,
                 std::string secret);
        std::string getFirstName() {
            return (this->first_name);
        }
        std::string getLastName() {
            return (this->last_name);
        }
        std::string getNickName() {
            return (this->nick_name);
        }
};

class PhoneBook {
    private:
        Contact contact[8];
    
    public:
        // Constructor Declaration
        PhoneBook();
        void addNewContact(int &contactCount);
        void deleteFirstContact(int &contactCount);
        void showTables(int &contactCount);
        void showContacts(int i);

};


# endif