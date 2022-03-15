#include<iostream>

using namespace std;

int main(){
    int i = 0, &r1 = i; // use & at the definition of r1 to indicate that r1 is a reference
    i = 5;
    r1 = 10;
    cout << i << " " << r1 << endl;
}