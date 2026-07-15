#include<iostream>
#include<cmath>

    int main(){
    int numero;

    std::cout<<"Digite um numero: "<<std::endl;
    std::cin>>numero;

    for(int i = 0; i <= 10; i++){
    std::cout<<"O resultado de "<<numero<<" x "<<i<<" = "<<numero * i<<std::endl;
    }
        return 0;
    }
    