#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main()
{
    int a[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 41 - 20;
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
/*
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
} */