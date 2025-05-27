#include "phonebook.hpp"

void PhoneBook::showContacts(int i) {
    std::cout << std::setw(10) << i << "|"
    << std::setw(10) << contact[i].getFirstName() << "|"
    << std::setw(10) << contact[i].getLastName() << "|"
    << std::setw(10) << contact[i].getNickName() << "|"
    << std::endl;
}

void PhoneBook::showTables(int &contactCount) {

    if (contactCount == 0) {
        std::cout << "No contact in PhoneBook\n";
    }

    for (int i = 0; i < contactCount; ++i) {
        if (i == 4)
            break ;
        showContacts(i);
    }
}