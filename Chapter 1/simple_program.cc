#include<stdlib.h>
#include<iostream>


int main(int argc, char *argv[]) {
    int return_val = atol(argv[1]);
    std::cout << "Input value: " << return_val << std::endl;
    return return_val;
}