#include<iostream>

int main(){
    int inicio, fim, hora;

    std::cin >> inicio;
    std::cin >> fim;

    if(inicio < fim)
        hora = fim - inicio;
    
    else if(fim < inicio)
        hora = 24 - inicio + fim;
    
    else
        hora = 24;
    
    std::cout << "O JOGO DUROU " << hora << " HORA(S)" << '\n';

    return 0;
}

