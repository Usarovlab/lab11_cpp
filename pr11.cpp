#include <iostream>
using namespace std;

int removeValue(int* arr, int size, int val) {
    int* read = arr;
    int* write = arr;
    int* end = arr + size;

    while (read < end) {
        if (*read != val) {
            *write = *read;
            write++;
        }
        read++;
    }

    return write - arr; // new size
}

int main() {
    int n, val;
    cin >> n >> val;
    int arr[n];
    for (int* p = arr; p < arr + n; p++) cin >> *p;

    int newSize = removeValue(arr, n, val);

    for (int* p = arr; p < arr + newSize; p++) cout << *p << " ";
    cout << endl;

    return 0;
}
