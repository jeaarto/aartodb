//
// Created by johannesaarto on 11/11/26.
//

#pragma once
#include <string>
#include <unordered_map>
#include <optional>

class Database {
private:
    std::unordered_map<std::string, std::string> data;
public:
    void set(const std::string& key, const std::string& value);
    std::optional<std::string> get(const std::string& key) const;
};