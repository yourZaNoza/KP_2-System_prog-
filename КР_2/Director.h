#pragma once
#include "Shop.h"

class Director : virtual public Shop {
private:
    std::string fullName;
    int id;
    std::string phoneNumber;
    int warehouseNumber;
public:

    // ����������� �� ���������
    Director();

    // ����������� � �����������
    Director(std::string n, std::string d, int f, std::string p, std::string fn, int i, std::string ph, int wn);
    Director(std::string fn, int i, std::string ph, int wn);

    // ����������
    ~Director();

    // ����� ��� ������ ����������
    void displayInfo();
};