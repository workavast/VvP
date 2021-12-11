#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    int LABA;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер задания" << std::endl;
    std::cin >> LABA;

    switch(LABA)
    {
    case 1://---
    {
        std::cout << "\n---Задание №1---\n" << std::endl;

        int N, n, buffer;

        std::cout << "Введите размер массивов" << std::endl;
        std::cin >> N;
        std::vector<int> a(N);
        std::vector<int> b(N);

        std::cout << "Введите значения ячеек первого массива(a) через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> a[n];
        }
        std::cout << "Введите значения ячеек первого массива(b) через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> b[n];
        }

        for (n = 0; n < N; n++)
        {
            buffer = a[n];
            a[n] = b[n];
            b[n] = buffer;
        }

        std::cout << "\nМассив a после смены его значений с массивом b" << std::endl;
        for (n = 0; n < N; n++)
        std::cout << a[n] << " ";

        std::cout << "\nМассив b после смены его значений с массивом a" << std::endl;
        for (n = 0; n < N; n++)
        std::cout << b[n] << " ";
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int N, n;

        std::cout << "Введите размер массива" << std::endl;
        std::cin >> N;

        std::vector<int> a(N);
        std::vector<double> b(N);

        std::cout << "Введите содержимое массива через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> a[n];
        }

        int n2;
        double sum = 0;
        for (n = 0; n < N; n++)
        {
            for (n2 = 0; n2 <= n; n2++)
            {
                sum += a[n2];
            }
            b[n] = sum/((double)n + 1);
            sum = 0;
        }

        std::cout << "\nМассив a" << std::endl;
        for (n = 0; n < N; n++)
        std::cout << a[n] << " ";

        std::cout << "\nМассив b, который построен по принципу: элемент B(K) равен среднему арифметическому элементов массива A с номерами от 1 до K" << std::endl;
        for (n = 0; n < N; n++)
        std::cout << b[n] << " ";

    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int N;

        std::cout << "Введите размер массива" << std::endl;
        std::cin >> N;

        std::vector<int> a(N);

        std::cout << "Введите значения ячеек через пробел" << std::endl;
        int n;
        for (n = 0; n < N; n++)
        {
            std::cin >> a[n];
        }

        int test = 0;
        int last;
        for (n = (N-1); n > 0; n--)
        {
            test = fmod(a[n], 2);
            if (test != 0)
            {
                last = n;
                break;
            }
        }
        
        for (n = 0; n < N; n++)
        {
            test = fmod(a[n], 2);
            if (test != 0)
            {
                a[n] += a[last];
            }
        }

        std::cout << "\nМассив после увеличения всех нечетных числел, содержащихся в массиве, на исходное значение последнего нечетного числа, если оно присутствует" << std::endl;

        for (n = 0; n < N; n++)
        {
            std::cout << a[n] << " ";
        }

    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int N, n;

        std::cout << "Введите размер массива" << std::endl;
        std::cin >> N;

        std::vector<int> a(N);

        std::cout << "Введите значения ячеек через пробел" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> a[n];
        }

        int min = a[0];
        int n1=0;
        for (n = 0; n < N; n++)
        {
            if (min > a[n])
            {
                min = a[n];
                n1 = n;
            }
        }

        int max = a[0];
        int n2=0;
        for (n = 0; n < N; n++)
        {
            if (max < a[n])
            {
                max = a[n];
                n2 = n;
            }
        }

        if (n1 < n2)
        {
            for (n = (n1+1); n < n2; n++)
            a[n] = 0;
        }
        else
        {
            for (n = (n2+1); n < n1; n++)
                a[n] = 0;
        }

        std::cout << "\nМассив после обнуления элементов, расположенных между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы)" << std::endl;
        for (n = 0; n < N; n++)
            std::cout << a[n] << " ";
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int N, n;

        std::cout << "Введите размер массива" << std::endl;
        std::cin >> N;
        std::vector<int> a(N);

        std::cout << "Введите значения ячеек массива через пробел, где все значения ячеек, кроме первой, упорядочены по возрастанию" << std::endl;
        for (n = 0; n < N; n++)
        {
            std::cin >> a[n];
        }
        
        int n2 = 0;
        int buffer = a[0];
        int hight = 0;
        for (n = 1; n < N; n++)
        {
            if (a[0] < a[n])
            {
                hight = n;
                break;
            }
        }
        if (a[0] > a[N - 1])
            hight = N-1;
        
        if (a[0] > a[N - 1])
        {
            for (n = 0; n < (N-1); n++)
            {
                a[n] = a[n+1];
            }
            a[N-1] = buffer;

            std::cout << "\nМассив после упорядочивания по возрастания" << std::endl;
            for (n = 0; n < N; n++)
                std::cout << a[n] << " ";
        }
        else
        {
            for (n = 1; n < hight; n++)
            {
                a[n - 1] = a[n];
            }
            a[hight - 1] = buffer;

            std::cout << "\nМассив после упорядочивания по возрастания" << std::endl;
            for (n = 0; n < N; n++)
                std::cout << a[n] << " ";
        }
    }
    }
}