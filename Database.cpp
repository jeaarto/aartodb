//
// Created by johannesaarto on 11/11/26.
//

#include "Database.h"

void Database::set(const std::string& key, const std::string& value) {
    data[key] = value;
}