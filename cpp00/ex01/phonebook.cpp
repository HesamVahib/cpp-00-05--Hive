#include "phonebook.hpp"

// Constrcutors Definition
PhoneBook::PhoneBook() {}
Contact::Contact() {}

int main() {
    PhoneBook phonebook;
    int contactCount = 0;
    std::string command;

    while (1) {
        std::cout << "Enter a Command like ADD or SEARCH or EXIT" << std::endl;

        // break by Ctrl+D signals for EOF
        if (!(std::cin >> command)) {
            break ;
        }

        if (command == "ADD") {
            phonebook.addNewContact(contactCount);
        }

        else if (command == "SEARCH") {
            phonebook.showTables(contactCount);
        }

        else if (command == "EXIT") {
            break ;
        }

        else {
            std::cout << "Invalide Command\n";
        }
    }
    return (0);
}