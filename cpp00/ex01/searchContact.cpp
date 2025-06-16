#include "phonebook.hpp"

std::string truncateString(const std::string& str, size_t width) {
    if (str.length() <= width)
        return str;
    return str.substr(0, width - 1) + ".";
}

void PhoneBook::showContacts(int i, bool isSearch) {
    if (isSearch) {
        std::cout << "First Name: " << contact[i].getFirstName() << "\n"
                  << "Last Name: " << contact[i].getLastName() << "\n"
                  << "Nick Name: " << contact[i].getNickName() << "\n"
                  << "Phone Number: " << contact[i].getPhoneNumber() << "\n"
                  << "Secret!: " << contact[i].getSecret() << "\n"
                  << std::endl;
        return;
    }
    std::cout << std::setw(10) << i + 1 << "|"
    << std::setw(10) << truncateString(contact[i].getFirstName(), 10) << "|"
    << std::setw(10) << truncateString(contact[i].getLastName(), 10) << "|"
    << std::setw(10) << truncateString(contact[i].getNickName(), 10) << "|"
    << std::endl;
}

void PhoneBook::showTables(int &contactCount) {
    if (contactCount == 0) {
        std::cout << "No contact in PhoneBook\n";
        return ;
    }

    for (int i = 0; i < contactCount; ++i) {
        if (i == 4)
            break ;
        showContacts(i, false);
    }
    std::cout << "Enter the index of the contact you want to search: ";
    int index;
    std::cin >> index;
    if (index < 1 || index > contactCount) {
        std::cout << "Invalid index, Returning to Menu.\n";
        return ;
    }
    showContacts(index - 1, true);
}