#include <iostream>

int main()
{
    int a;

    std::cin >> a;

    int b = a / 2;
    int c = a - b * 2;//определяем четность/нечетность числа

    setlocale(LC_ALL, "Russian");
    if(a>9)
    { 
        if(a>99)
        { 
            if(c == 0)
            {std::cout << "четное трехзначное число" << std::endl;}
            else
            {std::cout << "нечетное трехзначное число" << std::endl;}
        }
        else
        {
            if(c == 0)
            {std::cout << "четное двузначное число" << std::endl;}
            else
            {std::cout << "нечетное двузначное число" << std::endl;}
        }
    }
    else
    {
        if (c == 0)
        {std::cout << "четное однозначное число" << std::endl;}
        else
        {std::cout << "нечетное однозначное число" << std::endl;}
    }

    return 0;
}