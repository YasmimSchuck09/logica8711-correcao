#include<iostream>

long long calcularFatorial(int n){
    long long resultado = 1;

    for(int i = 1; i <=  n; i++){
        resultado *= i;
    }

    return resultado; 
}

int main(){
    int numero;

    std::cout<<"Digite um numero para calcular fatorial: "<<std::endl;
    std::cin>>numero;

    if(numero < 0){
        std::cout<<"Erro: Fatorial de numero negativo nao existe!"<<std::endl;
    }else{
        long long fatorial = calcularFatorial(numero);
        std::cout<<numero<<"! = "<<fatorial<<std::endl;
    }
}

// este é o exemplo da ulização do long long quando precisamos calcular o valor fatorial: 
// exemplo: 5 é o numero escohido, então ele precisa se multiplicar com o numero anterior: 5x4: 20