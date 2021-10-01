#include <iostream>

int main()
{
    int a, b, c;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел три стороны треугольника" << std::endl;
    std::cin >> a >> b >> c;

    bool d1 = (a + b) > c;
    bool d2 = (b + c) > a;
    bool d3 = (c + a) > b;

    bool d0 = (d1 + d2 + d3)/3;
     
    std::cout << std::boolalpha;
    std::cout << "Существует ли треугольник со сторонами a, b, c \n" << "Ответ: " << d0 << std::endl;

    return 0;
}