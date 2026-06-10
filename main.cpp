#include<iostream>

int main(){
    int idade = 17;

    std::string resultado = (idade >= 18) ? "Maior d eidade!" : "Menor de idade";

    std::cout<<resultado<<std::endl;
}