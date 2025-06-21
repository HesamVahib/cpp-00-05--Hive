#include "harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return (1);
    }
    std::string level = av[1];

    Harl harl;
    if (level == "DEBUG") {
        harl.complain("DEBUG");
    } else if (level == "INFO") {
        harl.complain("INFO");
    } else if (level == "WARNING") {
        harl.complain("WARNING");
    } else if (level == "ERROR") {
        harl.complain("ERROR");
    } else {
        std::cerr << "Invalid level. Use DEBUG, INFO, WARNING, or ERROR." << std::endl;
        return (1);
    }
    return (0);
}