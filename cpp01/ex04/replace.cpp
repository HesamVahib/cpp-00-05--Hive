#include "replace.hpp"

int replace(const std::string &filename, const std::string &str_to_replace, const std::string &replacement_str) {
    if (str_to_replace.empty()) {
        std::cerr << "Error: The string to replace cannot be empty." << std::endl;
        return (0);
    }
    std::ifstream file_in(filename);
    if (!file_in) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (0);
    }
    std::string content;
    std::string line;
    while (std::getline(file_in, line)) {
        content += line + '\n';
    }

    size_t pos = 0;
    while ((pos = content.find(str_to_replace, pos)) != std::string::npos) {
        content.replace(pos, str_to_replace.length(), replacement_str);
        pos += replacement_str.length();
    }

    std::ofstream file_out(filename + ".replace");
    if (!file_out) {
        std::cerr << "Error: Could not open file " << filename << " for writing." << std::endl;
        return (0);
    }

    file_out << content;
    return (1);
}
