#pragma once
#include <iostream>
#include <string>

class Client {
private:
    std::string fullName;
    int clientId;
    std::string phoneNumber;
    double balance;

public:
    // Конструктор по умолчанию
    Client();

    // Конструктор с параметрами
    Client(std::string fn, int id, std::string pn, double b);

    // Деструктор
    ~Client();

    // Геттеры и сеттеры
    std::string getFullName() { return fullName; }
    void setFullName(std::string fn) { fullName = fn; }

    int getClientId() { return clientId; }
    void setClientId(int id) { clientId = id; }

    std::string getPhoneNumber() { return phoneNumber; }
    void setPhoneNumber(std::string pn) { phoneNumber = pn; }

    double getBalance() { return balance; }
    void setBalance(double b) { balance = b; }

    // Метод для добавления денег на счет
    void addMoney(double amount);

    // Метод для снятия денег со счета
    void removeMoney(double amount);

    // Метод для вывода информации
    void displayInfo();
};