#include<iostream>
#include<string>

struct Pessoa{
    std:: string nome;
    int idade;
    float altura;
};

int main(){

    Pessoa p1;

    p1.nome = "Yasmim!";
    p1.idade = 17;
    p1.altura = 1.65;

    std::cout<<"Nome: "<<p1.nome<<std::endl;
    std::cout<<"Idade: "<<p1.idade<<std::endl;
    std::cout<<"Altura: "<<p1.altura<<std::endl;

    // PODERIA SER FEITO TAMBEM: 

    // Pessoa p1 = {"Yasmim", 17, 1.65};
    // Pessoa p2 = {"Danielly", 20, 1.70};
    // std::cout<<"p1.nome<<" tem ""<<p1.idade<<" anos "<<" e mede "<<p1.altura<<"m"<<std::endl;


    return 0;
}