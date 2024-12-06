#include "Seller.h"

// Конструктор по умолчанию
Seller::Seller() {
    this->fullName = "";
    this->id = 0;
    this->phoneNumber = "";
}

// Конструктор с параметрами
Seller::Seller(std::string n, std::string d, int f, std::string p, std::string fn, int i, std::string ph)
    : Shop(n, d, f, p), fullName(fn), id(i), phoneNumber(ph) {}
Seller::Seller(std::string fn, int i, std::string ph) : fullName(fn), id(i), phoneNumber(ph) {}

// Деструктор
Seller::~Seller() {}

// Метод для вывода информации
void Seller::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "Информация о продавце: " << std::endl;
    std::cout << "Название магазина: " << getName() << std::endl;
    std::cout << "ФИО продавца: " << fullName << std::endl;
    std::cout << "ID продавца: " << id << std::endl;
    std::cout << "Номер телефона продавца: " << phoneNumber << std::endl;
    std::cout << std::endl;
}
