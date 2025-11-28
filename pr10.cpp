#include <iostream>
using namespace std;

void mergeSorted(const int* a, int n, const int* b, int m, int* out) {
    const int* pa = a;
    const int* pb = b;
    int* po = out;

    while (pa < a + n && pb < b + m) {
        *po++ = (*pa < *pb) ? *pa++ : *pb++;
    }

    while (pa < a + n) *po++ = *pa++;
    while (pb < b + m) *po++ = *pb++;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int* p = a; p < a + n; p++) cin >> *p;
    for (int* p = b; p < b + m; p++) cin >> *p;

    int out[n + m];
    mergeSorted(a, n, b, m, out);

    for (int* p = out; p < out + n + m; p++) cout << *p << " ";
    cout << endl;

    return 0;
}
