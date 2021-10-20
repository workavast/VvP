#include <iostream>

int main()
{
    int LABA;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер задания" << std::endl;
    std::cin >> LABA;

    switch (LABA)
    {
    case 1://---
    {
        std::cout << "\n---Задание №1---\n" << std::endl;

        int Bait;

        std::cout << "Введите число байт" << std::endl;
        std::cin >> Bait;

        int ost = fmod(Bait, 1024);

        int KBait = Bait / 1024;//находим чило полных килобайтов
        if (ost == 0)
        {
            std::cout << "Число полных килобайт в заданых байт = " << KBait << std::endl;
        }
        else
        {
            KBait=KBait+1;
            std::cout << "Число полных килобайт в заданых байт = " << KBait << std::endl;

        }
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        double A, B;

        std::cout << "Введите длинну отрезка А, который больше отрезка В" << std::endl;
        std::cin >> A;
        std::cout << "Введите длинну отрезка В" << std::endl;
        std::cin >> B;

        int total = A / B;

        std::cout << "Количество отрезков B, размещенных на отрезке A = " << total << std::endl;
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        double A, B;

        std::cout << "Введите длинну отрезка А, который больше чем В" << std::endl;
        std::cin >> A;
        std::cout << "Введите длинну отрезка В" << std::endl;
        std::cin >> B;

        int total = A / B;//количество полных отрезков В на отрезке А
        total = A - total * B;//длина незанятой части отрезка A

        std::cout << "Длина незанятой части отрезка A, отрезками В = " << total << std::endl;
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int a, b, c, total;

        std::cout << "Введите двузначное число" << std::endl;
        std::cin >> a;

        b = a / 10;//выделяем первую цифру
        c = a - b * 10;//выделяем вторую цифру 
        total = c * 10 + b;//меняем местами первую и вторую цифру

        std::cout << "Число, полученное при перестановке цифр исходного числа = " << total << std::endl;
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int a, b, c, total;

        std::cout << "Введите трехзначное число" << std::endl;
        std::cin >> a;

        b = a / 100;//выделяем первую цифру
        c = a - b * 100;//выделяем из трех значного числа двузначное 
        total = c * 10 + b;//приписываем справа к двузначному числу первую цифру

        std::cout << "Полученное число после перестановки первой цифры в конец = " << total << std::endl;
    }
    }

    return 0;
}