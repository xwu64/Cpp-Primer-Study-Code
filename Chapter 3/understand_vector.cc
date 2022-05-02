#include<iostream>
#include<vector>
using std::vector;

int main(){
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> copy_v(v); // copy v to copy_v 
    copy_v[0][0] = 100;
    std::cout << v[0][0] << std::endl; // output 1
    std::cout << copy_v[0][0] << std::endl; // output 100

    vector<int> v2 = {1,2,3};
    for (auto &n : v2) {
        v2.push_back(n);
    }
    std::cout << v2.size() << std::endl; // output 6 
}