#include<iostream>

int main(){

int idade;

std::cout<<"Digite a sua idade: "<<std::endl;
std::cin>>idade;

if(idade >= 18){
      std::cout<<"Voce é maior de idade!"<<std::endl;
}else{
      std::cout<<"Voce é menor de idade!!"<<std::endl;
}

      return 0;
}