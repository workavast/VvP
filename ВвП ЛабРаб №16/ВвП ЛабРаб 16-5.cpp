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
        mas[n] = n + 1;
        n = n + 1;
    }

    n = 0;
    int n1 = 1;
    int n2 = 0;
    int N_up = 0;
    int N_down;

    std::cout << "Содержание массива:" << std::endl;

    if ((N % 2) == 0)
    {
        while (n < (N / 2))
        {
            std::cout << n1 << ") " << mas[N_up] << std::endl;
            n1 = n1 + 2;//увеличиваем выводимый порядковый номер
            N_up = N_up + 2;//увеличиваем порядковый номер массива
            n = n + 1;
        }

        n = 0;
        n2 = N;
        N_down = N - 1;

        while (n < (N / 2))
        {
            std::cout << n2 << ") " << mas[N_down] << std::endl;
            n2 = n2 - 2;//уменьшаем выводимый порядковый номер
            N_down = N_down - 2;//уменьшаем порядковый номер массива
            n = n + 1;
        }
    }
    else
    {
        while (n <= (N / 2))
        {
            std::cout << n1 << ") " << mas[N_up] << std::endl;
            n1 = n1 + 2;//увеличиваем выводимый порядковый номер
            N_up = N_up + 2;//увеличиваем порядковый номер массива
            n = n + 1;
        }

        n = 0;
        n2 = N - 1;
        N_down = N - 2;

        while (n < (N / 2))
        {
            std::cout << n2 << ") " << mas[N_down] << std::endl;
            n2 = n2 - 2;//уменьшаем выводимый порядковый номер
            N_down = N_down - 2;//уменьшаем порядковый номер массива
            n = n + 1;
        }
    }

    return 0;
}