#include <iostream>

int main(){
    int x {5};
    std::cout << "x is equal to: " << x << std::endl;
    std::cout << "Yep." << '\n';
    std::cout << "And that's all, folks! \n";

    std::cout << "Enter a number: ";
    int y {};
    std::cin >> y;
    std::cout <<"You entered " << y <<'\n';

    return 0;
}
