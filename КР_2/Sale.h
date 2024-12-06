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
    // ����������� �� ���������
    Sale();

    // ����������� � �����������
    Sale(int oid, int eid, int cid, int pid, int q, double c);

    // ����������
    ~Sale();

    // ������
    int getOrderId() { return orderId; }

    // ����� ��� �������� �������
    void createSale(Client& client, Warehouse& warehouse);

    // ����� ��� �������� ����� �������
    bool checkClientBalance(Client& client);

    // ����� ��� �������� ������ �� ������
    bool checkProductInStock(Warehouse& warehouse);

    // ����� ��� ������ ����������
    void displayInfo();
};
