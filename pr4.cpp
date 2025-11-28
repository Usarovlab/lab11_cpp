#include <iostream>
using namespace std;

void fixNeg(int* arr, int size) {
    int* ptr = arr;
    int* end = arr + size;
    while (ptr < end) {
        if (*ptr < 0) {
            *ptr = 0;
        }
        ptr++;
    }
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int* ptr = arr; ptr < arr + n; ptr++) {
        cin >> *ptr;
    }

    fixNeg(arr, n);

    for (int* ptr = arr; ptr < arr + n; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
