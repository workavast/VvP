#include <iostream>

int main()
{
    int a, n = 1;
    double price, b=0;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите цену 1-го кг конфет" << std::endl;
    std::cin >> a;

    while (n < 10)
    {
        n = n + 1;
        b = b + 0.1;
        price = a * b;
        std::cout << "Цена " << b << " кг конфет = " << price << std::endl;
    }
    
    return 0;
}