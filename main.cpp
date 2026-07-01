#include<iostream>

// 2. Soma simples
// Leia 5 números e calcule a soma total.

int main(){
    int numeros[5];
    int soma = 0;
    for(int i = 0; i < 5; i++){
        std::cout<<"Digite um numero: "<<std::endl;
        std::cin>>numeros[i];
        soma += numeros[i];
    }
    std::cout<<"A soma dos numeros é: "<<soma<<std::endl;
    return 0;
}

