

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>


int main()
{
    setlocale(LC_ALL, "Russian");
    double e = 1e-2;
    double s = 0;
    double x, si = 0.5;
    int n = 1;
    while (abs(pow(2, 0.5) - s) >= e) {
        x = 2 + 0.5;
        for (int i = 0; i < n; i++) {
            x = 2 + 1. / x;
        }
        s = 1 + 1. / x;
        n++;
    }
    std::cout << "Точность: " << e << std::endl;
    std::cout << "Эталонное значение: " << pow(2, 0.5) << std::endl;
    std::cout << "Полученное значение: " << s << std::endl;
    std::cout << "Количество итераций: " << n;
} 

/*
int main()
{
    int a[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        a[i] = rand()%41 - 20;
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; i++) {
        if (a[i] < 0) {
            a[i] = abs(a[i]);
        }
    }
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
}

int main()
{
    unsigned n;
    std::cin >> n;
    srand(time(NULL));
    int* lst(new int[n] {});
    for (int i = 0; i < n; i++) {
        lst[i] = rand() % 41 - 20;
        std::cout << lst[i] << " ";
    }
    for (int i = 0; i < n; i++) {
        if (lst[i] < 0) {
            lst[i] = abs(lst[i]);
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << lst[i] << " ";
    }
} 

int main() {

} */
/*
int main() {
    unsigned n, k;
    std::cin >> n >> k;
    srand(time(NULL));
    int** mtrx = new int* [n];
    for (int i = 0; i < n; i++) {
        mtrx[i] = new int[k];
        for (int j = 0; j < k; j++) {
            mtrx[i][j] = rand() % 2;
            std::cout << mtrx[i][j] << " ";
        }
        std::cout << "\n";
    }

    int max_g = -1, ind_g = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = 1; j < k; j++) {
            if (mtrx[i][j] == 0 and mtrx[i][j - 1] == 0) {
                cnt++;
            }
        }
        if (cnt > max_g) {
            max_g = cnt;
            ind_g = i;
        }
    }
    std::cout << "Gorizontal:" << max_g << " " << ind_g << "\n";

    int max_v = -1, ind_v = 0;
    for (int j = 0; j < k; j++) {
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (mtrx[i][j] == 0 and mtrx[i-1][j] == 0) {
                cnt++;
            }
        }
        if (cnt > max_v) {
            max_v = cnt;
            ind_v = j;
        }
    }
    std::cout << "Vertical:" << max_v << " " << ind_v << "\n";



    for (int i = 0; i < n; i++) {
        delete[] mtrx[i];
    }
    delete[] mtrx;
}
*/