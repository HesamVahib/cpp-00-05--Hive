#include "replace.hpp"

void replace(const std::string &filename, const std::string &str_to_replace, const std::string &replacement_str) {
    if (str_to_replace.empty()) {
        std::cerr << "Error: The string to replace cannot be empty." << std::endl;
        return;
    }
    std::ifstream file_in(filename);
    if (!file_in) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }
    std::string content;
    std::string line;
    while (std::getline(file_in, line)) {
        content += line + '\n';
    }
    file_in.close();
    
}
