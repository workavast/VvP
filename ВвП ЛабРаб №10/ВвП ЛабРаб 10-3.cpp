#include <iostream>

int main()
{
    int a;

    std::cin >> a;

    bool c1 = a - (a / 2) * 2 == 0;//определяем является ли число четным
    bool c2 = (a / 10) - 10 < 0;//определяем является ли число двузначным
    bool c = (c1 + c2) / 2;

    std::cout << std::boolalpha;
    setlocale(LC_ALL, "Russian");
    std::cout << "Данное число является четным двузначным \n" << "Ответ: " << c << std::endl;

    return 0;
}