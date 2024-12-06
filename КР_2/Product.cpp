#include "Product.h"

// ����������� �� ���������
Product::Product() {
    this->productId = 0;
    this->warehouseId = 0;
    this->quantity = 0;
    this->price = 0.0;
}

// ����������� � �����������
Product::Product(int pid, int wid, int q, double p)
    : productId(pid), warehouseId(wid), quantity(q), price(p) {}

// ����������
Product::~Product() {}

// ����� ��� ������ ����������
void Product::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "���������� � ������: " << std::endl;
    std::cout << "ID ������: " << productId << std::endl;
    std::cout << "ID ������: " << warehouseId << std::endl;
    std::cout << "����������: " << quantity << std::endl;
    std::cout << "����: " << price << std::endl;
    std::cout << std::endl;
}
