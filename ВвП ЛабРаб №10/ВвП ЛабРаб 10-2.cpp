#include <iostream>

int main()
{
    int A, B,C;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел значения A, B, C" << std::endl;
    std::cin >> A >> B >> C;

    bool c = (A < B)&(A < C)&(B < C);

    std::cout << std::boolalpha;
    std::cout << "Справедливо ли двойное неравенство A < B < C \n" << "Ответ: " << c << std::endl;

    return 0;
}