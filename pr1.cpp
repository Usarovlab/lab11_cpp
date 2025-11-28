#include<iostream>
using namespace std;
void setToHundred(int **p) {
    **p=100;
}
int main() {
    int *ptr= new int;
    *ptr=0;
    int x;
    cout<<"enter value(ignored): ";
    cin>>x;
    setToHundred(&ptr);
    cout<<"Updated value: "<<*ptr<<endl;
    delete ptr;
    return 0;
}
