#include <iostream>
using namespace std;

void printIfValid(int* p) {
    if (p == nullptr) {
        cout << "null";
    } else {
        cout << *p;
    }
}

int main() {
    string input;
    while (cin >> input) {
        int* p = nullptr;
        if (input != "n") {
            int value = stoi(input);
            p = &value;
        }
        printIfValid(p);
        cout << " ";
    }
    cout << endl;
    return 0;
}
