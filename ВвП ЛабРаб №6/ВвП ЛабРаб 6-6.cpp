#include <iostream>

int main()
{
    double A;

    std::cin >> A;

    double B = A * A;

    A = B*B*B*B;

    std::cout << "A^8 = " << A << std::endl;

    return 0;
}