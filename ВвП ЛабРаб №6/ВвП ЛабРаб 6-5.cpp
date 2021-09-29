#include <iostream>

int main()
{
    double x;

    std::cin >> x;

    double sum = x - 3;

    double y = 4 * pow(sum, 6) - 7 * pow(sum, 3) + 2;

    std::cout << "y = " << y << std::endl;

    return 0;
}