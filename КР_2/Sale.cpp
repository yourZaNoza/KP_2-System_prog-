#include "Sale.h"

// ����������� �� ���������
Sale::Sale() {
    this->orderId = 0;
    this->employeeId = 0;
    this->clientId = 0;
    this->productId = 0;
    this->quantity = 0;
    this->cost = 0.0;
}

// ����������� � �����������
Sale::Sale(int oid, int eid, int cid, int pid, int q, double c)
    : orderId(oid), employeeId(eid), clientId(cid), productId(pid), quantity(q), cost(c) {}

// ����������
Sale::~Sale() {}

// ����� ��� �������� �������
void Sale::createSale(Client& client, Warehouse& warehouse) {
    if (checkClientBalance(client) && checkProductInStock(warehouse)) {
        client.removeMoney(cost);
        warehouse.removeProduct(quantity);
        std::cout << "������� ������� �������." << std::endl;
    }
    else {
        std::cout << "�� ������� ������� �������." << std::endl;
    }
}

// ����� ��� �������� ����� �������
bool Sale::checkClientBalance(Client& client) {
    return client.getBalance() >= cost;
}

// ����� ��� �������� ������ �� ������
bool Sale::checkProductInStock(Warehouse& warehouse) {
    return warehouse.getProductCount() >= quantity;
}

// ����� ��� ������ ����������
void Sale::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "���������� � �������: " << std::endl;
    std::cout << "ID ������: " << orderId << std::endl;
    std::cout << "ID ����������: " << employeeId << std::endl;
    std::cout << "ID �������: " << clientId << std::endl;
    std::cout << "ID ������: " << productId << std::endl;
    std::cout << "����������: " << quantity << std::endl;
    std::cout << "���������: " << cost << std::endl;
    std::cout << std::endl;
}
