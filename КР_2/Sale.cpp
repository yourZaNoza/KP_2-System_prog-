#include "Sale.h"

// Конструктор по умолчанию
Sale::Sale() {
    this->orderId = 0;
    this->employeeId = 0;
    this->clientId = 0;
    this->productId = 0;
    this->quantity = 0;
    this->cost = 0.0;
}

// Конструктор с параметрами
Sale::Sale(int oid, int eid, int cid, int pid, int q, double c)
    : orderId(oid), employeeId(eid), clientId(cid), productId(pid), quantity(q), cost(c) {}

// Деструктор
Sale::~Sale() {}

// Метод для создания продажи
void Sale::createSale(Client& client, Warehouse& warehouse) {
    if (checkClientBalance(client) && checkProductInStock(warehouse)) {
        client.removeMoney(cost);
        warehouse.removeProduct(quantity);
        std::cout << "Продажа создана успешно." << std::endl;
    }
    else {
        std::cout << "Не удалось создать продажу." << std::endl;
    }
}

// Метод для проверки счета клиента
bool Sale::checkClientBalance(Client& client) {
    return client.getBalance() >= cost;
}

// Метод для проверки товара на складе
bool Sale::checkProductInStock(Warehouse& warehouse) {
    return warehouse.getProductCount() >= quantity;
}

// Метод для вывода информации
void Sale::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "Информация о продаже: " << std::endl;
    std::cout << "ID заказа: " << orderId << std::endl;
    std::cout << "ID сотрудника: " << employeeId << std::endl;
    std::cout << "ID клиента: " << clientId << std::endl;
    std::cout << "ID товара: " << productId << std::endl;
    std::cout << "Количество: " << quantity << std::endl;
    std::cout << "Стоимость: " << cost << std::endl;
    std::cout << std::endl;
}
