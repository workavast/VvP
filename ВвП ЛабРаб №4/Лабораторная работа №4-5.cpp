#include <iostream>

int main()
{
    double a, b;

    std::cin >> a >> b;

    double A = abs(a);
    double B = abs(b);

    double sum = A + B;
    double raz = A - B;
    double pro = A * B;
    double del = A / B;

    setlocale(LC_ALL, "Russian");
    std::cout << "Сумма модулей a и b = " << sum << std::endl;
    std::cout << "Разность модулей a и b = " << raz << std::endl;
    std::cout << "Произведение модулей a и b = " << pro << std::endl;
    std::cout << "Частное модулей a и b = " << del << std::endl;

    return 0;
}