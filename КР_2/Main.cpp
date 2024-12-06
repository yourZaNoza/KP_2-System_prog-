//������� 7
//�������� ��������� �������, ������� ����� �� �������������� � ������ ��������� ������.
// � �������� ������ ������ ��������� ��������, �� ���������� � ������ ����������.
#include "Shop.h"
#include "Director.h"
#include "Seller.h"
#include "Product.h"
#include "Warehouse.h"
#include "Sale.h"
#include "Client.h"

int main() {
    setlocale(LC_ALL, "");
    Shop shop("�������1", "��������1", 1, "123-456-7890");
    shop.displayInfo();

    Director director("�������1", "��������1", 1, "123-456-7890", "��������1", 201, "123-456-7890", 1001);
    director.displayInfo();

    Seller seller("�������1", "��������1", 1, "123-456-7890", "��������1", 101, "987-654-3210");
    seller.displayInfo();

    Warehouse warehouse(1001, "�������1", 201, 100);
    warehouse.displayInfo();

    Product product(1, 1001, 50, 9.99);
    product.displayInfo();

    Client client("������1", 1, "111-222-3333", 1000.0);
    client.displayInfo();

    // ���������� � ������ ����� �� ����� �������
    client.addMoney(500.0);
    client.displayInfo();
    client.removeMoney(200.0);
    client.displayInfo();

    Sale sale(1, 101, 1, 1, 10, 99.9);
    sale.displayInfo();

    if (sale.checkClientBalance(client) && sale.checkProductInStock(warehouse)) {
        std::cout << "���� ������� � ����� �� ������ ��������� �������." << std::endl;
    }
    else {
        std::cout << "�������� ����� ������� ��� ������ �� ������ �� ��������." << std::endl;
    }

    sale.createSale(client, warehouse);

    client.displayInfo();
    warehouse.displayInfo();

    return 0;
}
