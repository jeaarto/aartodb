#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include "Database.h"

int main() {

std::cout << "AartoDB\n";

    Database database;

    while (true) {
        std::string line;

        std::cout << "> ";
        if (!std::getline(std::cin,line)) {
            break;
        }

        std::stringstream input(line);

        std::string command;
        input >> command;

        for (char& ch : command) {
            ch = static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
        }

        if (command == "exit") {
            break;
        }else if (command == "set") {
            std::string key;
            std::string value;

            if (!(input >> key >> value)) {
                std::cout << "Usage: SET <key> <value>\n";
                continue;
            }

            database.set(key, value);
            std::cout << "OK\n";
        }else if (command == "get") {
            std::string key;
            if (!(input >> key)) {
                std::cout << "Usage: GET <key>\n";
                continue;
            }

            auto result = database.get(key);
            if (result.has_value()) {
                std::cout << result.value() << '\n';
            } else {
                std::cout << "Key not found\n";
            }
        }
    }

    return 0;
}