#include <iostream>
using namespace std;

void avg(const double* arr, int size, double* result) {
    double sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    *result = sum / size;
}

int main() {
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    double result;
    avg(arr, n, &result);

    cout << result << endl;
    return 0;
}
