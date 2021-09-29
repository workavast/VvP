#include <iostream>

int main()
{
    int a, b, c, total;

    std::cin >> a;

    b = a / 10;//выделяем первую цифру
    c = a - b * 10;//выделяем вторую цифру 
    total = c * 10 + b;//меняем местами первую и вторую цифру

    setlocale(LC_ALL, "Russian");
    std::cout << "Число, полученное при перестановке цифр исходного числа = " << total << std::endl;

    return 0;
}