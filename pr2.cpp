#include<iostream>
using namespace std;
void SwapPtr(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}
int main() {
    int x,y;
    cin>>x>>y;
    SwapPtr(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
