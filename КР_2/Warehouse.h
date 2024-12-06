#pragma once
#include <iostream>
#include <string>

class Warehouse {
private:
    int warehouseId;
    std::string shopName;
    int directorId;
    int productCount;

public:
    // Конструктор по умолчанию
    Warehouse();

    // Конструктор с параметрами
    Warehouse(int wid, std::string sn, int did, int pc);

    // Деструктор
    ~Warehouse();

    // Геттеры 
    int getWarehouseId() { return warehouseId; }

    std::string getShopName() { return shopName; }

    int getDirectorId() { return directorId; }

    int getProductCount() { return productCount; }

    // Метод для вывода информации
    void displayInfo();

    // Метод для вычитания товара со склада
    void removeProduct(int quantity);
};
