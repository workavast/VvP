#include <iostream>
#include <vector>

int main()
{
    int N, A, B;

    setlocale(LC_ALL, "Russian");
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

        std::cout << n_mas+1 << ") " << mas[n_mas] << std::endl;
        n = 0;
        n_mas = n_mas + 1;
    }

    return 0;
}