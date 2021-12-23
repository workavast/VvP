#include <iostream>
#include <vector>
#include <cstdlib>

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

        int N, n;

        std::cout << "Введите размер массива, в котором будут удалены все соседние одинаковые элементы, оставив их первые вхождения" << std::endl;
        std::cin >> N;

        std::vector<int> a(N);

        std::cout << "Введите значения ячеек через пробел" << std::endl;
        int num;
        for (n = 0; n < N; n++)
        {
            std::cin >> num;
            a[n] = num;
        }

        int n2;
        for (n = 0; n < N - 1; n)
        {
            if (a[n] == a[n + 1])
            {
                for (n2 = n; n2 < N - 1; n2++)
                {
                    a[n2] = a[n2 + 1];
                }
                a.pop_back();
                N--;
            }
            else
                n++;

        }

        std::cout << "\nМассив" << std::endl;
        for (n = 0; n < N; n++)
            std::cout << a[n] << " ";
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;
        int N, n;

        std::cout << "Введите размер массива, в котором будут удалены все элементы, встречающиеся ровно два раза." << std::endl;
        std::cin >> N;

        std::vector<int> a(N);

        std::cout << "Введите значения ячеек через пробел" << std::endl;
        int num;
        for (n = 0; n < N; n++)
        {
            std::cin >> num;
            a[n] = num;
        }

        int n2, buffer;
        int n3 = 0;
        for (n = 0; n < N; n++)
        {
            n3 = 0;
            for (n2 = 0; n2 < N; n2++)
                {
                if (a[n] == a[n2])
                {
                    n3++;
                    buffer = n2;
                }
                }

            if (n3 == 2)
            {
                for (buffer; buffer < N-1; buffer++)
                {
                    a[buffer] = a[buffer + 1];
                }
                a.pop_back();
                N--;

                for (n; n < N - 1; n++)
                {
                    a[n] = a[n + 1];
                }
                a.pop_back();
                N--;
                n = -1;
            }
        }


        std::cout << "\nМассив размера" << N << std::endl;
        for (n = 0; n < N; n++)
            std::cout << a[n] << " ";
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int N, n;

        std::cout << "Введите размер массива, в котором элемент с нулевым значением будет вставлен перед минимальным и после максимального элемента массива." << std::endl;
        std::cin >> N;

        std::vector<int> a(N);

        std::cout << "Введите значения ячеек через пробел" << std::endl;
        int num;
        for (n = 0; n < N; n++)
        {
            std::cin >> num;
            a[n] = num;
        }

        int min = a[0];
        int n1 = 0;
        for (n = 0; n < N; n++)//находим минимум в массиве
        {
            if (min > a[n])
            {
                min = a[n];
                n1 = n;
            }
        }

        int max = a[0];
        int n2 = 0;
        for (n = 0; n < N; n++)//находим максимум в массиве
        {
            if (max < a[n])
            {
                max = a[n];
                n2 = n;
            }
        }

        a.emplace_back(0);
        for (n = N; n > n1; n--)//вставляем элемент с нулевым значением перед минимальным элементом
        {
            a[n] = a[n - 1];
        }
        a[n1] = 0;
        N++;

        a.emplace_back(0);
        for (n = N; n > n2+1; n--)//вставляем элемент с нулевым значением после максимального элемента
        {
            a[n] = a[n - 1];
        }
        a[n2+2] = 0;
        N++;

        std::cout << "\nМассив" << std::endl;
        for (n = 0; n < N; n++)
            std::cout << a[n] << " ";
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int N, n;

        std::cout << "Введите размер массива, после каждого отрицательного элемента которого будет вставлен элемент с нулевым значением" << std::endl;
        std::cin >> N;

        std::vector<int> a(N);

        std::cout << "Введите значения ячеек через пробел" << std::endl;
        int num;
        for (n = 0; n < N; n++)
        {
            std::cin >> num;
            a[n] = num;
        }

        int n2;
        for (n = 0; n < size(a); n++)
        {
            if (a[n] < 0)
            {
                a.emplace_back(0);
                for (n2 = size(a)-2; n2 > n; n2--)
                {
                    a[n2 + 1] = a[n2];
                }
                a[n + 1] = 0;
            }
        }

        std::cout << "\nМассив" << std::endl;
        for (n = 0; n < size(a); n++)
            std::cout << a[n] << " ";
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int N, n;

        std::cout << "Введите размер массива" << std::endl;
        std::cin >> N;

        std::vector<int> a(N);

        std::cout << "Введите значения ячеек через пробел" << std::endl;
        int num;
        for (n = 0; n < N; n++)
        {
            std::cin >> num;
            a[n] = num;
        }

        int n2;
        for (n = 0; n < size(a); n++)
        {
            if (a[n] > 0)
            {
                a.emplace_back(0);
                for (n2 = size(a) - 2; n2 >= n; n2--)
                {
                    a[n2 + 1] = a[n2];
                }
                a[n] = 0;
                n++;
            }
        }

        std::cout << "\nМассив" << std::endl;
        for (n = 0; n < size(a); n++)
            std::cout << a[n] << " ";
    }
    }
}