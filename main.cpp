#include<iostream>
#include<cmath>

    int main(){
    int soma = 0;

    std::cout<<"Soma dos numeros de 1 a 100"<<std::endl;

    for(int i = 1; i <= 100; i++){
        soma = soma + i;
    }

    std::cout<<"valor final e: "<<soma<<std::endl;
        return 0;
    }