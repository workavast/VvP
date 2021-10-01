#include <iostream>

int main()
{
    int A, B;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел значения A, B" << std::endl;
    std::cin >> A >> B;

    bool c = (A > 2)&(B <= 3);

    std::cout << std::boolalpha;
    std::cout << "Справедливы ли неравенства одновременно A > 2 и B <= 3\n" <<"Ответ: " << c << std::endl;

    return 0;
}