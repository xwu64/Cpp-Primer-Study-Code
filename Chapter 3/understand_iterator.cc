#include<iostream>
#include<vector>

using std::vector;

int main(){
    auto v = vector<int>{1,2,3,4,5};
    for (auto it = v.begin(); it != v.end(); ++it){
        *it = *it * 2;
    }

    for (auto it = v.cbegin(); it != v.cend(); ++it){
        std::cout << *it << std::endl;
        // *it = *it * 2; // error: the iterator is const
    }

    // iterator does not guarantee bound checking
    auto b = v.begin();
    b += 10;
    std::cout << *b << std::endl;
    b -= 10;
    std::cout << *b << std::endl;
    b -= 5;
    std::cout << *b << std::endl;
    
}