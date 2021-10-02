#include <iostream>
#include <vector>

int main()
{
    int N, A, D;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите размер массива состоящего из нечетных чисел" << std::endl;
    std::cin >> N;
    std::cout << "Введите через пробел первый член A и знаменатель D геометрической прогрессии A, A·D, A·D^2 , A·D^3 , ..." << std::endl;
    std::cin >> A >> D;
    std::vector <int> mas(N);

    int n1 = 0;
    int n2 = 0;

    std::cout << "Содержание массива:" << std::endl;
    while (n1 < N)
    {
        mas[n1] = A * pow(D,n1);
        std::cout << n1 + 1 << ") " << mas[n1] << std::endl;
        n1 = n1 + 1;
    }

    return 0;
}