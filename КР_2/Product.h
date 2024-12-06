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
    // ����������� �� ���������
    Product();

    // ����������� � �����������
    Product(int pid, int wid, int q, double p);

    // ����������
    ~Product();

    // ������� � �������
    int getProductId() { return productId; }

    int getWarehouseId() { return warehouseId; }

    int getQuantity() { return quantity; }

    double getPrice() { return price; }

    // ����� ��� ������ ����������
    void displayInfo();
};