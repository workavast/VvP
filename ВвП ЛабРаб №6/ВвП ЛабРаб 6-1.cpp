#include <iostream>

int main()
{
    double A, B, C;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число А" << std::endl;
    std::cin >> A;
    std::cout << "Введите число В" << std::endl;
    std::cin >> B;

    C = A;
    A = B;
    B = C;

    std::cout << "Число А = " << A << std::endl;
    std::cout << "Число В = " << B << std::endl;
    
    return 0;
}