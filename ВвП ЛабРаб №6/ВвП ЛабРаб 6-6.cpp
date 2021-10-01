#include <iostream>

int main()
{
    double A;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введи значение А" << std::endl;
    std::cin >> A;

    double B = A * A;//Вспомогательная переменнаая

    A = B*B*B*B;

    std::cout << "A^(8) = " << A << std::endl;

    return 0;
}