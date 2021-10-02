#include <iostream>
#include <vector>

int main()
{
    int N, A;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите размер массива" << std::endl;
    std::cin >> N;
    std::vector <int> mas(N);

    int n = 0;
    while (n < N)//вводим значения массива
    {
        mas[n] = n+1;
        n = n + 1;
    }

    n = 0;
    int n1 = 1;
    int n2 = 2;
    int N_up = 0;
    int N_down = N - 1;

    std::cout << "Содержание массива:" << std::endl;

    while (n < (N/2))
    {
        std::cout << n1 << ") " << mas[N_up] << std::endl;
        n1 = n1 + 2;
        N_up = N_up + 1;
        n = n + 1;
        std::cout << n2 << ") " << mas[N_down] << std::endl;
        n2 = n2 + 2;
        N_down = N_down - 1;
    }

    if ((N % 2) != 0)
    {std::cout << N << ") " << mas[N/2] << std::endl;}

    return 0;
}