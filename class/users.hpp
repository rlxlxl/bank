#pragma once
#include "../utils/utils.hpp"
#include "bank.hpp"


class User {
protected:
    int password;
    string firstName;
    string lastName;
    string email;

public:
    User (int pass, string fn, string ln, string em) :
        password(pass), firstName(fn), lastName(ln), email(em) {}
};