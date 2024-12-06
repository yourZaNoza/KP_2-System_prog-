#include "Client.h"

// ����������� �� ���������
Client::Client() {
    this->fullName = "";
    this->clientId = 0;
    this->phoneNumber = "";
    this->balance = 0.0;
}

// ����������� � �����������
Client::Client(std::string fn, int id, std::string pn, double b)
    : fullName(fn), clientId(id), phoneNumber(pn), balance(b) {}

// ����������
Client::~Client() {}

// ����� ��� ���������� ����� �� ����
void Client::addMoney(double amount) {
    balance += amount;
    std::cout << "��������� " << amount << " �� ���� ������� " << fullName << std::endl;
}

// ����� ��� ������ ����� �� �����
void Client::removeMoney(double amount) {
    if (balance >= amount) {
        balance -= amount;
        std::cout << "����� " << amount << " �� ����� ������� " << fullName << std::endl;
    }
    else {
        std::cout << "������������ ������� �� ����� ������� " << fullName << std::endl;
    }
}

// ����� ��� ������ ����������
void Client::displayInfo() {
    std::cout << "__________________ " << std::endl;
    std::cout << "���������� � �������: " << std::endl;
    std::cout << "��� �������: " << fullName << std::endl;
    std::cout << "ID �������: " << clientId << std::endl;
    std::cout << "����� ��������: " << phoneNumber << std::endl;
    std::cout << "������: " << balance << std::endl;
    std::cout << std::endl;
}
