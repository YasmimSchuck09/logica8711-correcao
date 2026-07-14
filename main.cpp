#include<iostream>
#include<cmath>

    int main(){

    const double pi = 3.14;
    int raio;
    double area;

    std::cout<<"Digite o raio do circulo: "<<std::endl;
    std::cin>>raio;

    area = pi * (raio * raio);
    std::cout<<"A area do circulo e: "<<area<<std::endl;

    }