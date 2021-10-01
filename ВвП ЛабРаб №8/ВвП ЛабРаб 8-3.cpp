#include <iostream>

int main()
{
    double A, B;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите длинну отрезка В" << std::endl;
    std::cin >> B;
    std::cout << "Введите длинну отрезка А, который больше чем В" << std::endl;
    std::cin >> A;

    int total = A / B;//количество полных отрезков В на отрезке А
    total = A - total * B;//длина незанятой части отрезка A

    std::cout << "Длина незанятой части отрезка A = " << total << std::endl;

    return 0;
}