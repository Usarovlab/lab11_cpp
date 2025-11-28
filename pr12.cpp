#include <iostream>
using namespace std;

bool identical(const int* a, int** bptr, int size) {
    int* b = *bptr;
    for (int i = 0; i < size; i++) {
        if (*(a + i) != *(b + i)) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int* bp = b;
    cout << identical(a, &bp, n) << endl;

    return 0;
}
