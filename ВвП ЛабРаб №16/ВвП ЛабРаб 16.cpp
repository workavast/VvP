#include <iostream>
#include <vector>

int main()
{
    int LABA;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер задания" << std::endl;
    std::cin >> LABA;

    switch (LABA)
    {
    case 1://---
    {
        std::cout << "\n---Задание №1---\n" << std::endl;

        int N;

        std::cout << "Введите размер массива состоящего из нечетных чисел" << std::endl;
        std::cin >> N;
        std::vector <int> mas(N);

        int n1 = 0;
        int n2 = 0;

        std::cout << "Содержание массива:" << std::endl;
        while (n1 < N)
        {
            mas[n1] = 1 + n2;
            std::cout << n1 + 1 << ") " << mas[n1] << std::endl;
            n2 = n2 + 2;
            n1 = n1 + 1;
        }
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int N, A, D;

        std::cout << "Введите размер массива состоящего из нечетных чисел" << std::endl;
        std::cin >> N;
        std::cout << "Введите через пробел первый член массива A и знаменатель D геометрической прогрессии A, A·D, A·D^2 , A·D^3 , ... ,которой будет заполнен массив" << std::endl;
        std::cin >> A >> D;
        std::vector <int> mas(N);

        int n1 = 0;
        int n2 = 0;

        std::cout << "Содержание массива:" << std::endl;
        while (n1 < N)
        {
            mas[n1] = A * pow(D, n1);
            std::cout << n1 + 1 << ") " << mas[n1] << std::endl;
            n1 = n1 + 1;
        }
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int N, A, B;

        std::cout << "Введите размер массива, которйый больше 2-ух, и в котором каждый последующий элемент после второй ячейки равен сумме всех предыдущих" << std::endl;
        std::cin >> N;
        std::vector <int> mas(N);
        std::cout << "Введите через пробел первые два элемента массива" << std::endl;
        std::cin >> A >> B;

        mas[0] = A;
        mas[1] = B;

        int n_mas = 2;
        int n = 0;

        std::cout << "Содержание массива:" << std::endl;
        std::cout << "1) " << mas[0] << std::endl;
        std::cout << "2) " << mas[1] << std::endl;

        while (n_mas < N)
        {
            while (n < n_mas)
            {
                mas[n_mas] = mas[n_mas] + mas[n];
                n = n + 1;
            }

            std::cout << n_mas + 1 << ") " << mas[n_mas] << std::endl;
            n = 0;
            n_mas = n_mas + 1;
        }
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int N, A;

        std::cout << "Введите размер массива, элементы которго будут выведены в следующем порядке: A1, AN , A2, AN−1, A3, AN−2" << std::endl;
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
        int n2 = 2;
        int N_up = 0;
        int N_down = N - 1;

        std::cout << "Содержание массива:" << std::endl;

        while (n < (N / 2))
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
        {
            std::cout << N << ") " << mas[N / 2] << std::endl;
        }
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int N, A;

        std::cout << "Введите размер массива, элементы которого будут выведены вначале с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров" << std::endl;
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
    }
    }

    return 0;
}