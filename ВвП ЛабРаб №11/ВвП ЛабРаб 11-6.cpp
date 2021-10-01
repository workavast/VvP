#include <iostream>

int main()
{
    int a;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число от 1 до 999" << std::endl;
    std::cin >> a;

    int b = a / 2;
    int c = a - b * 2;//определяем четность/нечетность числа

    if(a>9)
    { 
        if(a>99)
        { 
            if(c == 0)
            {std::cout << "Введено четное трехзначное число" << std::endl;}
            else
            {std::cout << "Введено нечетное трехзначное число" << std::endl;}
        }
        else
        {
            if(c == 0)
            {std::cout << "Введено четное двузначное число" << std::endl;}
            else
            {std::cout << "Введено нечетное двузначное число" << std::endl;}
        }
    }
    else
    {
        if (c == 0)
        {std::cout << "Введено четное однозначное число" << std::endl;}
        else
        {std::cout << "Введено нечетное однозначное число" << std::endl;}
    }

    return 0;
}