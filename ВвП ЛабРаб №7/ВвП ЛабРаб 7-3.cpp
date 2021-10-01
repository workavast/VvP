#include <iostream>

int main()
{
    double X, A, Y;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите вес первой пачки конфет в кг" << std::endl;
    std::cin >> X;
    std::cout << "Введите цену конфет" << std::endl;
    std::cin >> A;
    std::cout << "Введите вес второй пачки уонфет в кг" << std::endl;
    std::cin >> Y;

    double price_1kg = A / X;//цена 1-го кг конфет
    double total = (1 + Y) * price_1kg;//цена Y+1 кг конфет

    std::cout << "Цена второй пачки конфет + цена 1 кг этих конфет = " << total << std::endl;

    return 0;
}