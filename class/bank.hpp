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

    string getBankName() {
        return bankName;
    }

    void getUsers() {
        for (int i = 0; i < users.size(); i++) {
            cout << "--------------------------------" << endl;
            cout << "Имя: " << users[i].getFirstName() << endl;
            cout << "Фамилия: " << users[i].getLastName() << endl;
            cout << "Email: " << users[i].getEmail() << endl;
            cout << "--------------------------------" << endl;
        }
        return;
    }

    void addUser(User user) {
        users.push_back(user);
        cout << "Пользователь успешно добавлен" << endl;
        return;
    }

    bool checkUser(User user) {
        for (int i = 0; i < users.size(); i++) {
            if (users[i].getEmail() == user.getEmail()) {
                return true;
            }
        }
        return false;
    }

    bool checkBalance(User user, int amount) {
        if (user.getBalance() >= amount) {
            return true;
        }
        return false;
    }

    void transferBank(User originUser, User targetUser, int amount) {
        if (checkUser(originUser) && checkUser(targetUser)) {
            if (checkBalance(originUser, amount)) {
                originUser.withdrawBalance(amount);
                targetUser.addBalance(amount);
                return;
            }
        }
    }
};