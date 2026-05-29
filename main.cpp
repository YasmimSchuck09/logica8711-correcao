#include<iostream>

void tabuada(int numero, int multiplicador){
    if(multiplicador == 0){
        return;
    }

    tabuada(numero, multiplicador - 1);

    std::cout<<numero<<" x "<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;
}

int main(){

int numero;
int multiplicador;

    std::cout<<"Digite o numero multiplicador: "<<std::endl;
    std::cin>>multiplicador;
    std::cout<<"Digite o valor pelo qual vc quer fazer a multiplicacao: "<<std::endl;
    std::cin>>numero;

    std::cout<<"o resultado da sua multiplicacao é: "<<numero * multiplicador<<std::endl;

    return 0;
}