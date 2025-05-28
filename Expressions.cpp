#include <iostream>
int five(){
    return 5;
}

int main(){
    int a {2};
    int b {2+3};
    int c {((2*3) + 4)};
    int d {b};
    int e {five()};

    std::cout << 2 + 3 << '\n';

    int x{6};
    int y{x-2};
    std::cout << y << '\n';

    int z{};
    z = x;
    std::cout << z * x << '\n';

    return 0;
}
