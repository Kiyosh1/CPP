#include<iostream>

int main(){
    int j {60};
    int i {1};

    for(int n=0; j>=0; n++){
        std::cout << "I=" << i << " " << "J=" << j << '\n';
        j-=5;
        i+=3;
    }
}
