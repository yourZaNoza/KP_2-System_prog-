#pragma once
#include "Shop.h"

class Director : virtual public Shop {
private:
    std::string fullName;
    int id;
    std::string phoneNumber;
    int warehouseNumber;
public:

    // Конструктор по умолчанию
    Director();

    // Конструктор с параметрами
    Director(std::string n, std::string d, int f, std::string p, std::string fn, int i, std::string ph, int wn);
    Director(std::string fn, int i, std::string ph, int wn);

    // Деструктор
    ~Director();

    // Метод для вывода информации
    void displayInfo();
};