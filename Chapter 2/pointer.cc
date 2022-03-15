#include<iostream>

using namespace std;

int main(){
    int n = 42;
    int *p = &n;
    *p = *p * *p;
    cout << n << " " << *p << endl;
}