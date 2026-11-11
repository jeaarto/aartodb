#include <iostream>
#include <string>

int main() {

    std::cout << "AartoDB\n";

    while (true) {
        std::string line;

        std::cout << "> ";
        if (!std::getline(std::cin,line)) {
            break;
        }

        if (line == "EXIT") {
            break;
        }
    }

    return 0;
}