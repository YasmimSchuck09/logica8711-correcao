#include<iostream>

int main(){

int num1, num2, soma, subt, mult;
float div;
int op;

std::cout<<"Digite aqui o valor para o numero 1: "<<std::endl;
std::cin>>num1;

std::cout<<"Digite aqui o valor para o numero 2: "<<std::endl;
std::cin>>num2;


std::cout<<"-----Escolha a operacao------"<<std::endl;
std::cout<<"1 - Soma";
std::cout<<"2 - Subtracao";
std::cout<<"3 - Multiplicacao";
std::cout<<"4 - Divisao";
std::cin>>op;

switch(op){
  case 1:
  soma = num1 + num2;
  std::cout<<"O resultado da soma e: "<<soma<<std::endl;
  break;

  case 2:
  subt = num1 - num2;
  std::cout<<"O resultado da sua subtracao é: "<<subt<<std::endl;
  break;

  case 3:
  mult = num1 * num2;
  std::cout<<"O resultado de sua multiplicacao e: "<<mult<<std::endl;
  break;

  case 4:
  div = num1 / num2;
  std::cout<<"O resultado de sua divisao e: "<<div<<std::endl;
  break;

  default:
  std::cout<<"Voce na oinseriu um valor valido!"<<std::endl;

  }

    return 0;
}
