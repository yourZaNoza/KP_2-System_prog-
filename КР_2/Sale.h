#pragma once
#include <iostream>
#include <string>
#include "Client.h"
#include "Warehouse.h"

class Sale {
private:
    int orderId;
    int employeeId;
    int clientId;
    int productId;
    int quantity;
    double cost;

public:
    // Конструктор по умолчанию
    Sale();

    // Конструктор с параметрами
    Sale(int oid, int eid, int cid, int pid, int q, double c);

    // Деструктор
    ~Sale();

    // Геттер
    int getOrderId() { return orderId; }

    // Метод для создания продажи
    void createSale(Client& client, Warehouse& warehouse);

    // Метод для проверки счета клиента
    bool checkClientBalance(Client& client);

    // Метод для проверки товара на складе
    bool checkProductInStock(Warehouse& warehouse);

    // Метод для вывода информации
    void displayInfo();
};
