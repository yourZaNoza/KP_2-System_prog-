#include "Shop.h"

// Конструктор по умолчанию
Shop::Shop() {
    this->name = "";
    this->director = "";
    this->floor = 0;
    this->phoneNumber = "";
}

// Конструктор с параметрами
Shop::Shop(std::string n, std::string d, int f, std::string p)
    : name(n), director(d), floor(f), phoneNumber(p) {}

// Деструктор
Shop::~Shop() {}

// Метод для вывода информации
void Shop::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "Информация о магазине: " << std::endl;
    std::cout << "Название магазина: " << name << std::endl;
    std::cout << "Директор: " << director << std::endl;
    std::cout << "Этаж: " << floor << std::endl;
    std::cout << "Номер телефона: " << phoneNumber << std::endl;
    std::cout << std::endl;
}
