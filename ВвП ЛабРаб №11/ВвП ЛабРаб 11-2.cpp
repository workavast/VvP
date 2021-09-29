#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    bool d1 = a > b | a > c;//узнаем является ли a наибольшим числом
    bool d2 = b > c | b > a;//узнаем является ли b наибольшим числом
    bool d3 = c > a | c > b;//узнаем является ли c наибольшим числом

    int sum = a * d1 + b * d2 + c * d3;//наименьшее значение умножается на ноль, а остальные на 1 и складываются

    setlocale(LC_ALL, "Russian");
    std::cout << "Сумма двух наибольших из чисел = " << sum << std::endl;

    return 0;
}