#include <iostream>

int main()
{
    double a;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите значение угла в градусах" << std::endl;
    std::cin >> a;

    double rad = a* 3.14 / 180;

    std::cout << "Значение угла в радианах = " << rad << std::endl;

    return 0;
}