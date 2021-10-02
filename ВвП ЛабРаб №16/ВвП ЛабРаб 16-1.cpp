#include <iostream>
#include <vector>

int main()
{
    int N;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите размер массива состоящего из нечетных чисел" << std::endl;
    std::cin >> N;
    std::vector <int> mas(N);

    int n1 = 0;
    int n2 = 0;

    std::cout << "Содержание массива:" << std::endl;
    while (n1 < N)
    {
        mas[n1] = 1 + n2;
        std::cout << n1+1 << ") " << mas[n1] << std::endl;
        n2 = n2 + 2;
        n1 = n1 + 1;
    }

    return 0;
}