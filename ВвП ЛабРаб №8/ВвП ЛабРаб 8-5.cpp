#include <iostream>

int main()
{
    int a, b, c, total;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите трехзначное число" << std::endl;
    std::cin >> a;

    b = a / 100;//выделяем первую цифру
    c = a - b * 100;//выделяем из трех значного числа двузначное 
    total = c * 10 + b;//приписываем справа к двузначному числу первую цифру

    setlocale(LC_ALL, "Russian");
    std::cout << "Полученное число после перестановки первой цифры в конец = " << total << std::endl;

    return 0;
}