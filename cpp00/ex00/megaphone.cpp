#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return 1;
    }
    int i = 1;
    while (argv[i]) {
        int j = 0;
        while (argv[i][j]) {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z') {
                argv[i][j] = argv[i][j] - 32;
            }
            std::cout << argv[i][j];
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}