#include "Seller.h"

// ����������� �� ���������
Seller::Seller() {
    this->fullName = "";
    this->id = 0;
    this->phoneNumber = "";
}

// ����������� � �����������
Seller::Seller(std::string n, std::string d, int f, std::string p, std::string fn, int i, std::string ph)
    : Shop(n, d, f, p), fullName(fn), id(i), phoneNumber(ph) {}
Seller::Seller(std::string fn, int i, std::string ph) : fullName(fn), id(i), phoneNumber(ph) {}

// ����������
Seller::~Seller() {}

// ����� ��� ������ ����������
void Seller::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "���������� � ��������: " << std::endl;
    std::cout << "�������� ��������: " << getName() << std::endl;
    std::cout << "��� ��������: " << fullName << std::endl;
    std::cout << "ID ��������: " << id << std::endl;
    std::cout << "����� �������� ��������: " << phoneNumber << std::endl;
    std::cout << std::endl;
}
