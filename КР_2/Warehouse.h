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
    // ����������� �� ���������
    Warehouse();

    // ����������� � �����������
    Warehouse(int wid, std::string sn, int did, int pc);

    // ����������
    ~Warehouse();

    // ������� 
    int getWarehouseId() { return warehouseId; }

    std::string getShopName() { return shopName; }

    int getDirectorId() { return directorId; }

    int getProductCount() { return productCount; }

    // ����� ��� ������ ����������
    void displayInfo();

    // ����� ��� ��������� ������ �� ������
    void removeProduct(int quantity);
};
