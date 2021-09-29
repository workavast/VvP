#include <iostream>

int main()
{
    double a, b, c;

    std::cin >> a >> b >> c;

    double total = abs((c - a) * (b - c));

    setlocale(LC_ALL, "Russian");
    std::cout << "Произведение длин отрезков AC и BC = " << total << std::endl;

    return 0;
}