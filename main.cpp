#include<iostream>

int main(){

int opcaoPagamento;
int qtdParafuso;
float valorParafuso = 1.40;
float valortotalParafuso;
float desconto;

std::cout<<"Digite a quantidade de parafusos desejada: "<<std::endl;
std::cin>>qtdParafuso;

valortotalParafuso = qtdParafuso * valorParafuso;

std::cout<<"Qual a forma de pagamento: "<<std::endl;
std::cout<<"--- 1 - Pix"<<std::endl;
std::cout<<"--- 2 - Dinheiro"<<std::endl;
std::cout<<"--- 3 - Cartao"<<std::endl;
std::cin>>opcaoPagamento;

if(opcaoPagamento == 1){
      std::cout<<"Sua compra ficou no valor total de R$: "<<valortotalParafuso<<std::endl;
}else if(opcaoPagamento == 2){
      desconto = valortotalParafuso * 0.90;
      std::cout<<"Sua compra ficou no valor total de R$:"<<desconto<<std::endl;
}else{
      std::cout<<"Sua compra ficou no valor total de R$: "<<valortotalParafuso<<std::endl;
}


      return 0;
}