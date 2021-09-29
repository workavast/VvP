#include <iostream>

int main()
{
    double x;

    std::cin >> x;

    double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    std::cout << "y = " << y << std::endl;

    return 0;
}