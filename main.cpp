#include<iostream>

int contarDigitos( int n){
    if(n == 0) return 0;

        return 1 + contarDigitos(n / 10);

}

int main(){

    int numero = 200;

    std::cout<<"O numero "<<numero<<" tem "<<contarDigitos(numero)<<" digitos.\n";

    return 0;
}