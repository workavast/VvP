#include <iostream>

int main()
{
    int N;
    int sum = 0;
    int K = 0;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число N" << std::endl;
    std::cin >> N;

    while (sum<N)
    {
        K = K + 1;
        sum = sum + K;
    }

    std::cout << "Наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N = " << K << std::endl;
    std::cout << "Сама эта сумма = " << sum << std::endl;

    return 0;
}