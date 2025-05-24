#include<iostream>

int main(){
    int a;
    int b = 6;
    int c (9);
    
    int d {5};
    int e {};
    
    std::cout << "A: " << a << '\n';
    std::cout << "B: " << b << '\n';
    std::cout << "C: " << c << '\n';
    std::cout << "D: " << d << '\n';
    std::cout << "E: " << e << '\n';
}
