#include <iostream>

int main()
{
    int a;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите трех значное число" << std::endl;
    std::cin >> a;

    int a1 = a / 100;
    int a2 = a / 10 - a1 * 10;
    int a3 = a - a1 * 100 - a2 * 10;

    bool c123 = (a1 > a2) & (a2 > a3);//проверяем являются ли цифры числа возрастающей последовательностью
    bool c321 = (a3 > a2) & (a2 > a1);//проверяем являются ли цифры числа убывающе последовательностью

    bool total = c123 + c321;

    std::cout << std::boolalpha;
    std::cout << "Цифры данного числа образуют возрастающую или убывающую последовательность \n" << "Ответ: " << total << std::endl;

    return 0;
}