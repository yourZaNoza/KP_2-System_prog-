//Вариант 7
//Создайте структуру классов, которые могли бы использоваться в работе торгового центра.
// В торговом центре должны храниться магазины, их сотрудники и прочая информация.
#include "Shop.h"
#include "Director.h"
#include "Seller.h"
#include "Product.h"
#include "Warehouse.h"
#include "Sale.h"
#include "Client.h"

int main() {
    setlocale(LC_ALL, "");
    Shop shop("Магазин1", "Директор1", 1, "123-456-7890");
    shop.displayInfo();

    Director director("Магазин1", "Директор1", 1, "123-456-7890", "Директор1", 201, "123-456-7890", 1001);
    director.displayInfo();

    Seller seller("Магазин1", "Директор1", 1, "123-456-7890", "Продавец1", 101, "987-654-3210");
    seller.displayInfo();

    Warehouse warehouse(1001, "Магазин1", 201, 100);
    warehouse.displayInfo();

    Product product(1, 1001, 50, 9.99);
    product.displayInfo();

    Client client("Клиент1", 1, "111-222-3333", 1000.0);
    client.displayInfo();

    // Добавление и снятие денег со счета клиента
    client.addMoney(500.0);
    client.displayInfo();
    client.removeMoney(200.0);
    client.displayInfo();

    Sale sale(1, 101, 1, 1, 10, 99.9);
    sale.displayInfo();

    if (sale.checkClientBalance(client) && sale.checkProductInStock(warehouse)) {
        std::cout << "Счет клиента и товар на складе проверены успешно." << std::endl;
    }
    else {
        std::cout << "Проверка счета клиента или товара на складе не пройдена." << std::endl;
    }

    sale.createSale(client, warehouse);

    client.displayInfo();
    warehouse.displayInfo();

    return 0;
}
