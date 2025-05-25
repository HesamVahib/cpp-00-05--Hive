#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <limits>

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
                 std::string secret) {
                    this->first_name = first_name;
                    this->last_name = last_name;
                    this->nick_name = nick_name;
                    this->phone_number = phone_number;
                    this->secret = secret;
                 };

        std::string getName(){
            return (this->first_name);
        }
};

# endif