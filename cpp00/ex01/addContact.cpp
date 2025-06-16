#include "phonebook.hpp"

void Contact::setContact(std::string first_name, 
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

void PhoneBook::deleteFirstContact(int &contactCount) {
    if (contactCount == 0)
        return ;

    for (int i = 1; i < contactCount; ++i) {
        contact[i - 1] = contact[i];
    }
    contactCount--;
    std::cout << "** A Contact Deleted **\n";
}

void PhoneBook::addNewContact(int &contactCount) {
    if (contactCount >= 8) {
        deleteFirstContact(contactCount);
    }

    Contact newContact;
    std::string first_name, last_name, nick_name, secret;
    int phone_number;

    std::cout << "Enter First Name: \n";
    std::getline(std::cin >> std::ws, first_name);
    std::cout << "Enter Last Name: \n";
    std::getline(std::cin, last_name);
    std::cout << "Enter Nick Name: \n";
    std::getline(std::cin, nick_name);
    std::cout << "Enter Phone Number: \n";
    while (!(std::cin >> phone_number)) {
        std::cout << "Invalid input. Please enter a valid integer for the phone number: " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Darkest Secret: \n";
    std::getline(std::cin, secret);
    newContact.setContact(first_name, last_name, nick_name, phone_number, secret);
    contact[contactCount++] = newContact;
    std::cout << "New Contact is added!\n";
}