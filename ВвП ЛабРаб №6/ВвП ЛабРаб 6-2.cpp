﻿#include <iostream>

int main()
{
    double A, B, C, D;

    std::cin >> A >> B >> C;

    D = C;
    C = B;
    B = A;
    A = D;

    std::cout << A << std::endl;
    std::cout << B << std::endl;
    std::cout << C << std::endl;

    return 0;
}