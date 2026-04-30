#include<iostream>
#include<string>

int main(){

int num;
float resultado;

std::cout<<"Digite um valor para num: "<<std::endl;
std::cin>>num;

std::cout<<num%2<<std::endl;
 if(num % 2 == 0){
      std::cout<<"O numero digitado é par"<<std::endl;
 }else if(num % 2 == 1){
      std::cout<<"O numero digitado é impar"<<std::endl;
 }else{
      std::cout<<"Numero invalido"<<std::endl;
 }
 
  return 0;
}