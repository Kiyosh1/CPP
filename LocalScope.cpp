#include <iostream>

int add(int x, int y){
    return x+y;
}

int main(){
    int a{5};
    int b{6};

    std::cout << add(a,b) << '\n';

    std::cout <<"Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout <<"Enter anoter integer: ";
    int y {};
    std::cin >> y;

    int sum{ x + y};
    std::cout << "The sum is: " << sum << '\n';

    return 0;
}
