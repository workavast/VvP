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

        int N, K, L;
        std::cout << "Введите размер массива N" << std::endl;
        std::cin >> N;
        std::vector<double> a(N);

        double n, m;//заполняем массив
        std::cout << "Введите значения массива через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> m;
            a[n] = m;
        }

        std::cout << "Введите через пробел целые числа K и L (1 <= K <= L <= N) " << std::endl;
        std::cin >> K >> L;

        double sum = 0;//находим сумму чисел ячеек от K до L
        for (n = (double)K - 1; n <= (double)L - 1; n++)
            sum += a[n];

        n = (double)L - (double)K + 1;//находим количество ячеек от K до L
        std::cout << "Среднее арифметическое элементов массива с номерами от K до L включительно = " << sum / n << std::endl;
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int N;
        std::cout << "Введите размер массива N" << std::endl;
        std::cin >> N;
        std::vector<double> a(N);

        double n, m;//заполняем массив
        std::cout << "Введите значения массива через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> m;
            a[n] = m;
        }

        double razn = 0;
        for (n = 2; n < N; n++)
        {
            razn = a[n] - a[n - 1];
            if ((a[1] - a[0]) != razn)
            {
                razn = 0;
                break;
            }
        }

        if (razn == 0)
            std::cout << "Элементы массива не образуют арифметическую прогрессию" << std::endl;
        else
            std::cout << "Элементы массива образуют арифметическую прогрессию, разность прогрессии = " << razn << std::endl;
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int N;
        std::cout << "Введите размер массива N" << std::endl;
        std::cin >> N;
        std::vector<double> a(N);

        double n, m;//заполняем массив
        std::cout << "Введите значения массива через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> m;
            a[n] = m;
        }

        double min = a[1];
        for (n = 3; n < N; n += 2)
        {
            if (a[n] < min)
                min = a[n];
        }

        std::cout << "Минимальный эллемент массива, среди ячеек с четными номерами = " << min << std::endl;
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int N;
        std::cout << "Введите размер массива N" << std::endl;
        std::cin >> N;
        std::vector<double> a(N);

        double n, m;//заполняем массив
        std::cout << "Введите значения массива через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> m;
            a[n] = m;
        }

        double max = 0;
        int test = 0;
        for (n = 1; n < (N - 1); n++)
        {
            if ((a[n - 1] < a[n]) && (a[n] > a[n + 1]))
            {
                max = a[n];
                test = 1;
            }
        }
        if (test == 1)
            std::cout << "Последний локальный максимум в массиве = " << max << std::endl;
        else
            std::cout << "В массиве нет локальных максимумов" << std::endl;
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int N;
        std::cout << "Введите размер массива N" << std::endl;
        std::cin >> N;
        std::vector<int> a(N);

        int n=0, m;//заполняем массив
        std::cout << "Введите значения массива через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> m;
            a[n] = m;
        }

        int n2=0;
        int otv1 = -1, otv2 = -1;

        for (n = 0; n < N; n++)
        {
            for (n2 = (n + 1); n2 < N; n2++)
            {
                if (a[n] == a[n2])
                {
                    otv1 = n;
                    otv2 = n2;
                    break;
                }
            }
        }
        if((otv1 == -1)||(otv2==-1))
            std::cout << "Массив не содержит одинаковых эллементов" << std::endl;
        else
            std::cout << "Номера ячеек массива содержащих одинаковые элементы = " << otv1 << " и " << otv2 << std::endl;
    }
    }

    return 0;
}