#pragma once
#include "../utils/utils.hpp"
#include "users.hpp"
#include <string>

class Bank {
private:
    string bankName;
    vector<User> users;
    int usersCounter = users.size();

public:
    Bank(string bn, vector<User> us) :
        bankName(bn), users(us) {}
};