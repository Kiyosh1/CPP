#include<iostream>

int returnFive(){
    return 5;
}

int getValueFromUser(){
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}
int main(){

    std::cout << returnFive() << '\n';
    std::cout << returnFive() + 2 << '\n';
    std::cout << "\n";

    int num{getValueFromUser()};
    std::cout << num << " double is " << num * 2 << '\n';

    return 0;

}
