#include <iostream>

int main()
{
    double A1, B1, C1, A2, B2, C2, x, y;
                                                 //                                         A1·x + B1·y = C1, 
    std::cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;//введение переменных ситсемы уравнений
                                                 //                                         A2·x + B2·y = C2,
    y = ((A2 * C1) / A1 - C2) / ((A2 * B1) / A1 - B2);
    
    x = (C1 - (B1 * y)) / A1;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}