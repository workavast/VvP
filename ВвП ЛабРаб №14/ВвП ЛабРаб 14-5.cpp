#include <iostream>

int main()
{
    int A, B;

    setlocale(LC_ALL, "Russian");
    std::cout << "Ввеите через пробел целые положительные числа A и B" << std::endl;
    std::cin >> A >> B;

    while ((A != 0) & (B != 0))
    {
        if (A > B)
        {A = A % B;}
        else
        {B = B % A;}
    }

    if (A < B)
    {std::cout << "НОД заданных чисел = " << B << std::endl;}
    else
    {std::cout << "НОД заданных чисел = " << A << std::endl;}

    return 0;
}