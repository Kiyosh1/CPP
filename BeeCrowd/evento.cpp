#include<iostream>

int main(){
    int x ;
    int m ;
    while(std::cin >> x >> m && (x !=0 || m !=0)){

        std::cout << x * m << '\n';
    }

    return 0;
}
