#include "Director.h"

// Конструктор по умолчанию
Director::Director()
    : fullName(""), id(0), phoneNumber(""), warehouseNumber(0) {}

// Конструктор с параметрами
Director::Director(std::string n, std::string d, int f, std::string p, std::string fn, int i, std::string ph, int wn)
    : Shop(n, d, f, p), fullName(fn), id(i), phoneNumber(ph), warehouseNumber(wn) {}
Director::Director(std::string fn, int i, std::string ph, int wn) : fullName(fn), id(i), phoneNumber(ph), warehouseNumber(wn) {}

// Деструктор
Director::~Director() {}

// Метод для вывода информации
void Director::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "Информация о директоре: " << std::endl;
    std::cout << "Название магазина: " << getName() << std::endl;
    std::cout << "ФИО директора: " << fullName << std::endl;
    std::cout << "ID директора: " << id << std::endl;
    std::cout << "Номер телефона директора: " << phoneNumber << std::endl;
    std::cout << "Номер склада: " << warehouseNumber << std::endl;
    std::cout << std::endl;
}
