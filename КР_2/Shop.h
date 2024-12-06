#pragma once
#include <iostream>
#include <string>

class Shop {
private:
    std::string name;
    std::string director;
    int floor;
    std::string phoneNumber;
public:
    // ����������� �� ���������
    Shop();

    // ����������� � �����������
    Shop(std::string n, std::string d, int f, std::string p);

    // ����������
    ~Shop();

    // ����� ��� ������ ����������
    void displayInfo();

    // ������
    std::string getName() { return name; }
};
