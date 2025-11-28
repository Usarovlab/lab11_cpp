#include <iostream>
using namespace std;

int sum2D(int** m, int r, int c) {
    int sum = 0;
    int** row = m;
    int** rowEnd = m + r;

    while (row < rowEnd) {
        int* col = *row;
        int* colEnd = *row + c;
        while (col < colEnd) {
            sum += *col;
            col++;
        }
        row++;
    }

    return sum;
}

int main() {
    int r, c;
    cin >> r >> c;

    int** m = new int*[r];
    for (int i = 0; i < r; i++) {
        m[i] = new int[c];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }

    cout << sum2D(m, r, c) << endl;

    for (int i = 0; i < r; i++) {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}
