#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    bool d1 = (a + b) > c;
    bool d2 = (b + c) > a;
    bool d3 = (c + a) > b;

    bool d0 = (d1 + d2 + d3)/3;
     
    setlocale(LC_ALL, "Russian");
    std::cout << std::boolalpha;
    std::cout << "Существует треугольник со сторонами a, b, c \n" << "Ответ: " << d0 << std::endl;

    return 0;
}