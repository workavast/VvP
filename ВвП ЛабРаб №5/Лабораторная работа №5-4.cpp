#include <iostream>

int main()
{
    double x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    double xx = abs(x1 - x2); 
    double yy = abs(y1 - y2);

    double P = 2 * (xx + yy);
    double S = xx * yy;

    std::cout << "P = " << P << std::endl;
    std::cout << "S = " << S << std::endl;

    return 0;
}