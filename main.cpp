#include<iostream>
#include<vector>

int main(){

std::vector<int>numeros; // variaveis

std::cout<<"===== Soma dos numeros ====="<<std::endl;

numeros.push_back(10);
numeros.push_back(20);
numeros.push_back(30);
numeros.push_back(40);

int soma = 0;
for(int i = 0; i <numeros.size(); i++){
    soma = soma + numeros[i];
}
std::cout<<"Vector: "<<numeros.size()<<std::endl;
std::cout<<"Soma: "<<soma<<std::endl;

        return 0;
}

