#include "Product.h"

// Конструктор по умолчанию
Product::Product() {
    this->productId = 0;
    this->warehouseId = 0;
    this->quantity = 0;
    this->price = 0.0;
}

// Конструктор с параметрами
Product::Product(int pid, int wid, int q, double p)
    : productId(pid), warehouseId(wid), quantity(q), price(p) {}

// Деструктор
Product::~Product() {}

// Метод для вывода информации
void Product::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "Информация о товаре: " << std::endl;
    std::cout << "ID товара: " << productId << std::endl;
    std::cout << "ID склада: " << warehouseId << std::endl;
    std::cout << "Количество: " << quantity << std::endl;
    std::cout << "Цена: " << price << std::endl;
    std::cout << std::endl;
}
