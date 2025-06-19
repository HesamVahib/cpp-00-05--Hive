#include "replace.hpp"

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string str_to_replace = av[2];
    std::string replacement_str = av[3];

    if (replace(filename, str_to_replace, replacement_str)) {
        std::cout << "Replacement successful." << std::endl;
    } else {
        std::cerr << "An error occurred during replacement." << std::endl;
        return 1;
    }

    return 0;
}