#pragma once
#include "../utils/utils.hpp"
#include "bank.hpp"


class User {
protected:
    string password = "default";
    string firstName = "default";
    string lastName = "default";
    string email = "default";
    int balance = 0;

public:
    User (string pass, string fn, string ln, string em) :
        password(pass), firstName(fn), lastName(ln), email(em) {}

    string getPassword() {
        return password;
    }

    string getFirstName() {
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    string getEmail() {
        return email;
    }

    void setPassword() {
        string oldPassword, newPassword;
        cout << "Введите старый пароль: ";
        cin >> oldPassword;

        if (getPassword() == oldPassword) {
            cout << "Введите новый пароль: ";
            cin >> newPassword;
            password = newPassword;
            cout << "Пароль успешно изменен" << endl;
        } else {
            cout << "Неверный пароль" << endl;
        }
        return;
    }

    void setFirstName() {
        string newFirstName;
        cout << "Введите новое имя: ";
        cin >> newFirstName;
        firstName = newFirstName;
        cout << "Имя успешно изменено" << endl;
        return;
    }
    
    void setLastName() {
        string newLastName;
        cout << "Введите новую фамилию: ";
        cin >> newLastName;
        lastName = newLastName;
        cout << "Фамилия успешно изменена" << endl;
        return;
    }
    
    void setEmail() {
        string newEmail;
        cout << "Введите новый email: ";
        cin >> newEmail;
        email = newEmail;
        cout << "Email успешно изменен" << endl;
        return;
    }

    void addBalance() {
        int amount;
        cout << "Введите сумму для пополнения: ";
        cin >> amount;
        balance += amount;
        cout << "Баланс успешно пополнен" << endl;
        return;
    }
    
    void withdrawBalance() {
        int amount;
        cout << "Введите сумму для снятия: ";
        cin >> amount;
        if (balance >= amount) {
            balance -= amount;
            cout << "Успешно выведено " << amount << " валюты." << endl;
        } else {
            cout << "Недостаточно средств" << endl;
        }
        return;
    }

    void getBalance() {
        cout << "Баланс: " << balance << endl;
        return;
    }
};