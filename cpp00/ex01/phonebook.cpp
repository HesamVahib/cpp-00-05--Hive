#include "phonebook.hpp"

Contact::Contact() {}

void addNewContact(Contact contacts[], int &contactCount) {
    if (contactCount >= 8) {
        std::cout << "Phonebook is full!" << std::endl;
        return ;
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
    contacts[contactCount++] = newContact;
    std::cout << "Contact added!" << std::endl;
}



int main(){
    Contact contacts[8];
    int contactCount = 0;
    while (1) {
        std::cout << "Enter a Command like ADD or SEARCH or EXIT" << std::endl;
        std::string command;
        std::cin >> command;
        if (command == "ADD") {
            addNewContact(contacts, contactCount);
        }
        if (command == "EXIT") {
            return (0);
        }
    }
    return (0);
}