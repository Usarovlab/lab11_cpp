#include <iostream>
using namespace std;

int* findMax(int* arr, int size) {
    int* maxPtr = arr;
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        if (*ptr > *maxPtr) {
            maxPtr = ptr;
        }
    }
    return maxPtr;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int* ptr = arr; ptr < arr + n; ptr++) {
        cin >> *ptr;
    }

    cout << *findMax(arr, n) << endl;
    return 0;
}
