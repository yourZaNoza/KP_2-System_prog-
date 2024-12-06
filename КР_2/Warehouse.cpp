#include "Warehouse.h"

// Конструктор по умолчанию
Warehouse::Warehouse() {
    this->warehouseId = 0;
    this->shopName = "";
    this->directorId = 0;
    this->productCount = 0;
}

// Конструктор с параметрами
Warehouse::Warehouse(int wid, std::string sn, int did, int pc)
    : warehouseId(wid), shopName(sn), directorId(did), productCount(pc) {}

// Деструктор
Warehouse::~Warehouse() {}

// Метод для вывода информации
void Warehouse::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "Информация о складе: " << std::endl;
    std::cout << "ID склада: " << warehouseId << std::endl;
    std::cout << "Название магазина: " << shopName << std::endl;
    std::cout << "ID директора: " << directorId << std::endl;
    std::cout << "Количество товаров: " << productCount << std::endl;
    std::cout << std::endl;
}

// Метод для вычитания товара со склада
void Warehouse::removeProduct(int quantity) {
    if (productCount >= quantity) {
        productCount -= quantity;
        std::cout << "Товар вычтен со склада. Осталось: " << productCount << std::endl;
    }
    else {
        std::cout << "Недостаточно товара на складе." << std::endl;
    }
}
