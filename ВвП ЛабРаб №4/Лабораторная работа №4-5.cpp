#include <iostream>

using namespace std

int main()
{
    double a, b;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите первое число" << std::endl;
    std::cin >> a;
    std::cout << "Введите второе число" << std::endl;
    std::cin >> b;

    double A = abs(a);
    double B = abs(b);

    double sum = A + B;
    double raz = A - B;
    double pro = A * B;
    double del = A / B;

    std::cout << "Сумма модулей a и b = " << sum << std::endl;
    std::cout << "Разность модулей a и b = " << raz << std::endl;
    std::cout << "Произведение модулей a и b = " << pro << std::endl;
    std::cout << "Частное модулей a и b = " << del << std::endl;

    return 0;
}