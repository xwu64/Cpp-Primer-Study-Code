#include<iostream>
#include"understand_extern.h"
#include"update_global_func1.h"
#include"update_global_func2.h"

using namespace std;
int global_var = 0;

int main(){
    cout << "  global_var: " << global_var << endl;
    update_local();
    cout << "  global_var: " << global_var << " (add `int` before global_var, so it defines a local variable and update its value instead of global variable value)" << endl;
    update_global1();
    cout << "  global_var: " << global_var << endl;
    update_global2();
    cout << "  global_var: " << global_var << endl;
    return 0;
}