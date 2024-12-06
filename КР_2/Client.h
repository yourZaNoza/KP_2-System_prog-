#pragma once
#include <iostream>
#include <string>

class Client {
private:
    std::string fullName;
    int clientId;
    std::string phoneNumber;
    double balance;

public:
    // ����������� �� ���������
    Client();

    // ����������� � �����������
    Client(std::string fn, int id, std::string pn, double b);

    // ����������
    ~Client();

    // ������� � �������
    std::string getFullName() { return fullName; }
    void setFullName(std::string fn) { fullName = fn; }

    int getClientId() { return clientId; }
    void setClientId(int id) { clientId = id; }

    std::string getPhoneNumber() { return phoneNumber; }
    void setPhoneNumber(std::string pn) { phoneNumber = pn; }

    double getBalance() { return balance; }
    void setBalance(double b) { balance = b; }

    // ����� ��� ���������� ����� �� ����
    void addMoney(double amount);

    // ����� ��� ������ ����� �� �����
    void removeMoney(double amount);

    // ����� ��� ������ ����������
    void displayInfo();
};