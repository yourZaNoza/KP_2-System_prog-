#include "Shop.h"

// ����������� �� ���������
Shop::Shop() {
    this->name = "";
    this->director = "";
    this->floor = 0;
    this->phoneNumber = "";
}

// ����������� � �����������
Shop::Shop(std::string n, std::string d, int f, std::string p)
    : name(n), director(d), floor(f), phoneNumber(p) {}

// ����������
Shop::~Shop() {}

// ����� ��� ������ ����������
void Shop::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "���������� � ��������: " << std::endl;
    std::cout << "�������� ��������: " << name << std::endl;
    std::cout << "��������: " << director << std::endl;
    std::cout << "����: " << floor << std::endl;
    std::cout << "����� ��������: " << phoneNumber << std::endl;
    std::cout << std::endl;
}
