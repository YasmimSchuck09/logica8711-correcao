#include<iostream>
#include<vector>

int main(){

std::vector<int>numeros; // variaveis

std::cout<<"===== Limpar vector ====="<<std::endl;

numeros.push_back(10);
numeros.push_back(20);
numeros.push_back(30);

std::cout<<"Tamanho antes: "<<numeros.size()<<std::endl;

numeros.clear();

std::cout<<"Tamanho depois: "<<numeros.size()<<std::endl;
std::cout<<"Vector vazio? "<<(numeros.empty() ? "Sim" : "Nao")<<std::endl;

        return 0;
}

