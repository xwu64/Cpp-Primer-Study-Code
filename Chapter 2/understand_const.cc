int get_int(){
    return 99;
}

constexpr int get_int2(){
    return 101;
} 

int main(){
    int i = 10;

    // Case: const for variable
    const int ci = 42;
    // ci = 13; // error: cannot assign to const variable
    // ci++; // error: cannot increment const variable
    // const int cj; // cj is not initialized
    const int ck = get_int(); // it's not a constant expression

    // Case: const for reference
    const int &cr = ci; 
    // int &ri = ci; // error: cannot bind reference to const variable

    // Case: const for pointer
    const int *cp = &ci; // const int
    // *cp = 13; // error: cannot assign to const int
    cp = &ck; // ok: cp is a pointer to const int

    int *const cq = &i; // const pointer
    *cq = 13; // ok: *cq is not const
    // cq = &ck; // error: cannot assign to const pointer

    // Case: constexpr
    constexpr int cex = 42;
    // constexpr int cex1 = get_int(); // it's not a constant expression
    constexpr int cex2 = get_int2();

}