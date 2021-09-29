#include <iostream>

int main()
{
    double A, B;

    std::cin >> A >> B;

    int total = A / B;//количество полных отрезков В на отрезке А
    total = A - total * B;//длина незанятой части отрезка A

    setlocale(LC_ALL, "Russian");
    std::cout << "Длина незанятой части отрезка A = " << total << std::endl;

    return 0;
}