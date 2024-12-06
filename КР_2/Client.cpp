#include "Client.h"

// Конструктор по умолчанию
Client::Client() {
    this->fullName = "";
    this->clientId = 0;
    this->phoneNumber = "";
    this->balance = 0.0;
}

// Конструктор с параметрами
Client::Client(std::string fn, int id, std::string pn, double b)
    : fullName(fn), clientId(id), phoneNumber(pn), balance(b) {}

// Деструктор
Client::~Client() {}

// Метод для добавления денег на счет
void Client::addMoney(double amount) {
    balance += amount;
    std::cout << "Добавлено " << amount << " на счет клиента " << fullName << std::endl;
}

// Метод для снятия денег со счета
void Client::removeMoney(double amount) {
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Снято " << amount << " со счета клиента " << fullName << std::endl;
    }
    else {
        std::cout << "Недостаточно средств на счете клиента " << fullName << std::endl;
    }
}

// Метод для вывода информации
void Client::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "Информация о клиенте: " << std::endl;
    std::cout << "ФИО клиента: " << fullName << std::endl;
    std::cout << "ID клиента: " << clientId << std::endl;
    std::cout << "Номер телефона: " << phoneNumber << std::endl;
    std::cout << "Баланс: " << balance << std::endl;
    std::cout << std::endl;
}
