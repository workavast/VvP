#include <iostream>

int main()
{
    double A, B;
    
    std::cin >> A >> B;

    double x = -B / A;//решение уравнения A·x + B = 0

    std::cout << "x = " << x << std::endl;

    return 0;
}