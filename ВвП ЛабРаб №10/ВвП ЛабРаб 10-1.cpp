#include <iostream>

int main()
{
    int A, B;

    std::cin >> A >> B;

    bool c = (A > 2) & (B <= 3);

    setlocale(LC_ALL, "Russian");
    std::cout << std::boolalpha;
    std::cout << "Справедливы неравенства A > 2 и B ≤ 3\n" << "Ответ: " << c << std::endl;

    return 0;
}