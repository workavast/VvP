#include <iostream>

int main()
{
    int a;

    std::cin >> a;

    int b = a / 2;
    int c = a - b*2;//определяем четность/нечетность числа

    setlocale(LC_ALL, "Russian");
    if (a >= 0)
    {
        if(a==0)
        {
            std::cout << "нулевое число" << std::endl;
        }
        else
        {
            if (c == 0)
            {std::cout << "положительное четное число" << std::endl;}
            else
            {std::cout << "положительное нечетное число" << std::endl;}
        }
    }
    else
    {
        if(c==0)
        {std::cout << "отрицательное четное число" << std::endl;}
        else
        {std::cout << "отрицательное нечетное число" << std::endl;}
    }

    return 0;
}