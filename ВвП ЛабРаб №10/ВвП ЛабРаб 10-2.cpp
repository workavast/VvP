#include <iostream>

int main()
{
    int A, B, C;

    std::cin >> A >> B >> C;

    bool c = (A < B) & (A < C) & (B < C);

    setlocale(LC_ALL, "Russian");
    std::cout << std::boolalpha;
    std::cout << "Справедливо двойное неравенство A < B < C \n" << "Ответ: " << c << std::endl;

    return 0;
}