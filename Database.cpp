//
// Created by johannesaarto on 11/11/26.
//

#include "Database.h"

void Database::set(const std::string& key, const std::string& value) {
    data[key] = value;
}

std::optional<std::string> Database::get(const std::string& key) const {

    auto it = data.find(key);

    if (it == data.end()) {
        return std::nullopt;
    }

    return it->second;
}