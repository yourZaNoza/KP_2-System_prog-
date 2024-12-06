#pragma once
#include <iostream>
#include <string>

class Shop {
private:
    std::string name;
    std::string director;
    int floor;
    std::string phoneNumber;
public:
    // Конструктор по умолчанию
    Shop();

    // Конструктор с параметрами
    Shop(std::string n, std::string d, int f, std::string p);

    // Деструктор
    ~Shop();

    // Метод для вывода информации
    void displayInfo();

    // геттер
    std::string getName() { return name; }
};
