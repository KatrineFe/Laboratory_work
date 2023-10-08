#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

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
            if (mtrx[i][j] == 0 and mtrx[i - 1][j] == 0) {
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

