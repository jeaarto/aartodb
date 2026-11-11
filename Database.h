//
// Created by johannesaarto on 11/11/26.
//

#pragma once
#include <string>
#include <unordered_map>

class Database {
private:
    std::unordered_map<std::string, std::string> data;
public:
    void set(std::string& key, std::string& value);
};