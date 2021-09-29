#include <iostream>

int main()
{
    double A;

    std::cin >> A;

    double B = A * A;
    double C = B * B * A;

    A = B * B * B * B * B * C;

    std::cout << "A^15 = " << A << std::endl;

    return 0;
}