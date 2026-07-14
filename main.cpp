#include<iostream>
#include<cmath>



    int calcularCubo(int num){
        return static_cast<int>(std::pow(num, 3)); // pow = numero de elevação do numero
    }

    int main(){

        int a;

        std::cout<<"Digite um numero inteiro: ";
        std::cin>>a;

        int cubo = calcularCubo(a);

        std::cout<<"O cubo de "<<a<<" e: "<<cubo<<std::endl;

        
    return 0;
    }
