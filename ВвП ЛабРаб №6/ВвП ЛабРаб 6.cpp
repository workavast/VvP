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

        double A, B, C;

        std::cout << "Введите число А" << std::endl;
        std::cin >> A;
        std::cout << "Введите число В" << std::endl;
        std::cin >> B;

        C = A;
        A = B;
        B = C;

        std::cout << "После взаимной сменны их значений" << std::endl;
        std::cout << "Число А = " << A << std::endl;
        std::cout << "Число В = " << B << std::endl;
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        double A, B, C, D;

        std::cout << "Введите число А" << std::endl;
        std::cin >> A;
        std::cout << "Введите число В" << std::endl;
        std::cin >> B;
        std::cout << "Введите число С" << std::endl;
        std::cin >> C;

        D = C;
        C = B;
        B = A;
        A = D;

        std::cout << "После переноса значений А в В, В в С, С в А их значения" << std::endl;
        std::cout << "Число А = " << A << std::endl;
        std::cout << "Число В = " << B << std::endl;
        std::cout << "Число С = " << C << std::endl;
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        double A, B, C, D;

        std::cout << "Введите число А" << std::endl;
        std::cin >> A;
        std::cout << "Введите число В" << std::endl;
        std::cin >> B;
        std::cout << "Введите число С" << std::endl;
        std::cin >> C;

        D = B;
        B = C;
        C = A;
        A = D;

        std::cout << "После переноса значений А в С, В в А, С в В их значения" << std::endl;
        std::cout << "Число А = " << A << std::endl;
        std::cout << "Число В = " << B << std::endl;
        std::cout << "Число С = " << C << std::endl;
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        double x;

        std::cout << "Введите значение х" << std::endl;
        std::cin >> x;

        double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

        std::cout << "уравнение 3*x^(6)-6*x^(2)-7 , при заданном х равняется " << y << std::endl;
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        double x;

        std::cout << "Введите значение х" << std::endl;
        std::cin >> x;

        double sum = x - 3;

        double y = 4 * pow(sum, 6) - 7 * pow(sum, 3) + 2;

        std::cout << "Уравнение 4*(x-3)^(6)-7*(x-3)^(3)+2 ,при заданном значении х равняется " << y << std::endl;
    }
    case 6://---
    {
        std::cout << "\n---Задание №6---\n" << std::endl;

        double A;

        std::cout << "Введи значение А" << std::endl;
        std::cin >> A;

        double B = A * A;//Вспомогательная переменнаая

        A = B * B * B * B;

        std::cout << "A^(8) = " << A << std::endl;
    }
    case 7://---
    {
        std::cout << "\n---Задание №7---\n" << std::endl;

        double A;

        std::cout << "Введи значение А" << std::endl;
        std::cin >> A;

        double B = A * A;//Вспомогательная переменнаая
        double C = B * B * A;//Вспомогательная переменнаая

        A = B * B * B * B * B * C;

        std::cout << "A^(15) = " << A << std::endl;
    }
    }

    return 0;
}