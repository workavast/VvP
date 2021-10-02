#include <iostream>

int main()
{
    int A, B;
    int A2 = 0;
    int bufer = 0;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел значения A<B" << std::endl;
    std::cin >> A >> B;

    std::cout << "Все целые числа от A до B включительно:" << std::endl;
    while (A <= B)
    {
        bufer = A;
        while (bufer > 0)
        {
            std::cout << A << " ";
            bufer = bufer - 1;
        }
        std::cout << std::endl;
        A = A + 1;
    }

    return 0;
}