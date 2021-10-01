#include <iostream>

int main()
{
    double A, B, C, D;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число А" << std::endl;
    std::cin >> A;
    std::cout << "Введите число В" << std::endl;
    std::cin >> B;
    std::cout << "Введите число С" << std::endl;
    std::cin >> C;

    D = C;
    C = B;
    B = A;
    A = D;

    std::cout << "Число А =" << A << std::endl;
    std::cout << "Число В =" << B << std::endl;
    std::cout << "Число С =" << C << std::endl;

    return 0;
}