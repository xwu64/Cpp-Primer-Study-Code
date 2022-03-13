#include<iostream>

using namespace std;

int main(){
    int input_val;
    cin >> input_val;
    cout << "  cout: " << input_val << endl;
    cerr << "  cerr: " << input_val << endl;
    clog << "  clog: " << input_val << endl; // both clog and cerror are transmitted to the standard error stream
    return 0;
}