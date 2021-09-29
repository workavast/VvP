#include <iostream>

int main()
{
    int a, b;

    std::cin >> a >> b;

    bool d1 = a > b;
    bool d2 = a < b;

    int a1 = b * d2 + a * d1;
    int b1 = a * d1 + b * d2;
    
    std::cout << "a = " << a1 << std::endl;
    std::cout << "b = " << b1 << std::endl;

    return 0;
}