#include "Warehouse.h"

// ����������� �� ���������
Warehouse::Warehouse() {
    this->warehouseId = 0;
    this->shopName = "";
    this->directorId = 0;
    this->productCount = 0;
}

// ����������� � �����������
Warehouse::Warehouse(int wid, std::string sn, int did, int pc)
    : warehouseId(wid), shopName(sn), directorId(did), productCount(pc) {}

// ����������
Warehouse::~Warehouse() {}

// ����� ��� ������ ����������
void Warehouse::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "���������� � ������: " << std::endl;
    std::cout << "ID ������: " << warehouseId << std::endl;
    std::cout << "�������� ��������: " << shopName << std::endl;
    std::cout << "ID ���������: " << directorId << std::endl;
    std::cout << "���������� �������: " << productCount << std::endl;
    std::cout << std::endl;
}

// ����� ��� ��������� ������ �� ������
void Warehouse::removeProduct(int quantity) {
    if (productCount >= quantity) {
        productCount -= quantity;
        std::cout << "����� ������ �� ������. ��������: " << productCount << std::endl;
    }
    else {
        std::cout << "������������ ������ �� ������." << std::endl;
    }
}
