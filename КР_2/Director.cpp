#include "Director.h"

// ����������� �� ���������
Director::Director()
    : fullName(""), id(0), phoneNumber(""), warehouseNumber(0) {}

// ����������� � �����������
Director::Director(std::string n, std::string d, int f, std::string p, std::string fn, int i, std::string ph, int wn)
    : Shop(n, d, f, p), fullName(fn), id(i), phoneNumber(ph), warehouseNumber(wn) {}
Director::Director(std::string fn, int i, std::string ph, int wn) : fullName(fn), id(i), phoneNumber(ph), warehouseNumber(wn) {}

// ����������
Director::~Director() {}

// ����� ��� ������ ����������
void Director::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "���������� � ���������: " << std::endl;
    std::cout << "�������� ��������: " << getName() << std::endl;
    std::cout << "��� ���������: " << fullName << std::endl;
    std::cout << "ID ���������: " << id << std::endl;
    std::cout << "����� �������� ���������: " << phoneNumber << std::endl;
    std::cout << "����� ������: " << warehouseNumber << std::endl;
    std::cout << std::endl;
}
