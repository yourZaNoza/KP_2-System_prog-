#pragma once
#include <iostream>
#include <string>

class Product {
private:
    int productId;
    int warehouseId;
    int quantity;
    double price;

public:
    // Конструктор по умолчанию
    Product();

    // Конструктор с параметрами
    Product(int pid, int wid, int q, double p);

    // Деструктор
    ~Product();

    // Геттеры и сеттеры
    int getProductId() { return productId; }

    int getWarehouseId() { return warehouseId; }

    int getQuantity() { return quantity; }

    double getPrice() { return price; }

    // Метод для вывода информации
    void displayInfo();
};