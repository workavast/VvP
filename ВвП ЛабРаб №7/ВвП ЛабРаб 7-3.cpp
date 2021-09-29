#include <iostream>

int main()
{
    double X, A, Y;
    
    std::cin >> X >> A >> Y;

    double price_1kg = A / X;//цена 1-го кг конфет
    double total = (1 + Y) * price_1kg;//цена Y+1 кг конфет

    std::cout << total << std::endl;

    return 0;
}