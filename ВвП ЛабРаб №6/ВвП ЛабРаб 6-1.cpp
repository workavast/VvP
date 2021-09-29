#include <iostream>

int main()
{
    double A, B, C;

    std::cin >> A >> B;
    
    C = A;
    A = B;
    B = C;

    std::cout << A << std::endl;
    std::cout << B << std::endl;

    return 0;
}