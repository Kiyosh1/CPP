#include<iostream>

int getValueFromUser(){
    int val{};
    std::cout << "Enter a value: ";
    std::cin >> val;
    
    return val;
}

int main(){
    int num {getValueFromUser()};

    std::cout << "You entered " << num << '\n';
    
    return 0;
}
