#include <iostream>
using namespace std;

int countValid(int* arr[], int size) {
    int count = 0;
    int** ptr = arr;
    int** end = arr + size;

    while (ptr < end) {
        if (*ptr != nullptr) {
            count++;
        }
        ptr++;
    }
    return count;
}

int main() {
    int a = 10, b = 20, c = 30;
    int* arr[5] = { &a, nullptr, &b, nullptr, &c };

    int validCount = countValid(arr, 5);
    cout << "Number of valid (non-null) pointers: " << validCount << endl;

    return 0;
}
