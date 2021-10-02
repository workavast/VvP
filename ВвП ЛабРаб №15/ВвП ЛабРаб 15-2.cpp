#include <iostream>

int Sign(double X)
{
    if(X<0)
    {X = -1;}

    if(X==0)
    {X = 0;}   

    if(X>0)
    {X = 1;}

    return X;
}


int main()
{
    int A, B, sum;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел значения А и В для решения выражения Sign(A) + Sign(B) " << std::endl;
    std::cin >> A >> B;

    sum = Sign(A) + Sign(B);

    std::cout << "Значение выражения = " << sum << std::endl;

    return 0;
}