#include<iostream>
#include<string>

int main(){

std::string nome;
int idade;
float altura;

std::cout<<"Digite seu nome: "<<std::endl;
std::cin>>nome;

std::cout<<"Digite sua altura: "<<std::endl;
std::cin>>altura;

std::cout<<"Digite sua idade: "<<std::endl;
std::cin>>idade;

if(idade <= 10){
      std::cout<<"Voce se encontra na classificação infantil!"<<std::endl;
}else if(idade <= 18){
      std::cout<<"Voce se encontra na classificação adolescente!"<<std::endl;
}else if(idade <= 60){
      std::cout<<"Voce se encontra na classificação adulta!"<<std::endl;
}else{
      std::cout<<"Voce se encontra na classificação Senior!"<<std::endl;
}

      return 0;
}