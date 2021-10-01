#include <iostream>

int main()
{
    int a, b, c, total;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите двузначное число" << std::endl;
    std::cin >> a;

    b = a / 10;//выделяем первую цифру
    c = a - b * 10;//выделяем вторую цифру 
    total = c * 10 + b;//меняем местами первую и вторую цифру

    std::cout << "Число, полученное при перестановке цифр исходного числа = " << total << std::endl;

    return 0;
}