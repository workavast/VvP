
#include <iostream>

int main()
{
    double a;

    std::cin >> a;

    double ugol = a * 57.3248;

    setlocale(LC_ALL, "Russian");
    std::cout << "Значение угла в градусах = " << ugol << std::endl;

    return 0;
}