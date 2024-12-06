#pragma once
#include "Shop.h"

class Seller : virtual public Shop {
private:
    std::string fullName;
    int id;
    std::string phoneNumber;
public:
   
    // ����������� �� ���������
    Seller();

    // ����������� � �����������
    Seller(std::string n, std::string d, int f, std::string p, std::string fn, int i, std::string ph);
    Seller(std::string fn, int i, std::string ph);

    // ����������
    ~Seller();

    // ����� ��� ������ ����������
    void displayInfo();
};