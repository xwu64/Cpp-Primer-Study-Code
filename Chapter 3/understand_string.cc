#include<iostream>
#include<string> 

using std::string;

int main(){
    string s1 = "hello";
    // string s2 = "hello" + "world"; // error: can't add string literals
    for (auto c : s1)
        std::cout << c << std::endl;
    string s2; 
    std::cin >> s2; // try to type "12 34"
    std::cout << s2 << std::endl; // output "12"
    for (auto &c : s1)
        c = 'X';
    std::cout << s1 << std::endl; // output "XXXXX"

    //Segmentation fault: 11 
    //  you are accessing memory that is not allowed by OS.
    for (int i=0; i>=0; i++){
        std::cout << i << " " << (int)s1[i] << std::endl;
    }
}
