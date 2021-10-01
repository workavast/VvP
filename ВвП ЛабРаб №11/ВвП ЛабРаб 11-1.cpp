#include <iostream>

int main()
{
    int a, b;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел два числа А и В" << std::endl;
    std::cin >> a >> b;
    std::cout << "Если их значения не равны, то каждой переменной будет присвоено большее из этих значений, а если равны, то нулевые значения" << std::endl;


    bool d1 = a > b;
    bool d2 = a < b;

    int a1 = b * d2 + a * d1;
    int b1 = a * d1 + b * d2;
    
    std::cout << "a = " << a1 << std::endl;
    std::cout << "b = " << b1 << std::endl;

    return 0;
}