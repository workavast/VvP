#include <iostream>

int main()
{
    double a, b;

    std::cin >> a >> b;
    
    double A = a * a;
    double B = b * b;

    double sum = A + B;
    double raz = A - B;
    double pro = A * B;
    double del = A / B;

    setlocale(LC_ALL, "Russian");
    std::cout << "Сумма квадратов a и b = " << sum << std::endl;
    std::cout << "Разность квадратов a и b = " << raz << std::endl;
    std::cout << "Произведение квадратов a и b = " << pro << std::endl;
    std::cout << "Частное квадратов a и b = " << del << std::endl;

    return 0;
}