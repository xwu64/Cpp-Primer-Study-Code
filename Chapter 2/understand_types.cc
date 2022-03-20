#include<iostream>

using namespace std;
int main(){
    typedef int my_int;
    typedef int* my_int_ptr;
    using my_double=double; // using is same as typedef

    my_int x = 10;
    my_int_ptr xp = &x;
    cout << x << " pointer: " << *xp << endl;

    my_double d = 0.1;
}
