#include<iostream>
#include<string>

int main(){

//solicite ao usuário para ele digitar nome (primeiro nome)
//colocar a idade 
//fazer o calculo para que diga que ano nasceu 
//no final mostre o nome da pessoa.. você nasceu no ano..

std::string nome;
int idade;
int anoAtual = 2026;
int result;

std::cout<<"Qual seu nome: "<<std::endl;
std::cin>>nome;
std::cout<<"Qual sua idade: "<<std::endl;
std::cin>>idade;
result = anoAtual - idade;
std::cout<<result<<std::endl; 

std::cout<<"Boa noite "<<nome<<"!!"<<std::endl;
std::cout<<"Você tem "<<idade<<" anos."<<std::endl;
std::cout<<" e seu ano de nascimento é: "<<result;



    return 0;
}