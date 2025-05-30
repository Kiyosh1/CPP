#include <iostream>

void doB(){
    std::cout << "In doB\n";
}
void doPrint(){
    std::cout << "In doPrint()\n";
}

void doA(){
    
    std::cout << "Starting doA()\n";
    doB();
    std::cout << "Ending doA()\n";
}
void doC(){
    std::cout << "In doC\n";
}

int main(){
    std::cout << "Starting main()\n";
    doPrint();
    doA();
    doB();
    doC();
    std::cout << "Ending main()\n";

    return 0;
}
