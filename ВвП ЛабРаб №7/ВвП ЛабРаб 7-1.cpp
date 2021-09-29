#include <iostream>

int main()
{
    double a;

    std::cin >> a;

    double rad = a* 3.14 / 180;

    setlocale(LC_ALL, "Russian");
    std::cout << "Значение угла в радианах = " << rad << std::endl;

    return 0;
}