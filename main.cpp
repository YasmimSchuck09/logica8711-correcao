#include<iostream>
#include<vector>

int main(){

std::vector<int>numeros; // variaveis

std::cout<<"===== Acessar elemento ====="<<std::endl;

numeros.push_back(100); // determinar valores 
numeros.push_back(200);
numeros.push_back(300);
numeros.push_back(400);

std::cout<<"Vector: ";
for(int i = 0; i < numeros.size(); i++){ // impressão dos valores 
    std::cout<<numeros[i]<<" ";
}
std::cout<<std::endl;

std::cout<<"Elemento na posicao 0: "<<numeros[0]<<std::endl; // numeros nos locais determinados 
std::cout<<"Elemento na posicao 2: "<<numeros[2]<<std::endl;
std::cout<<"Ultimo elemento: "<<numeros[numeros.size() - 1]<<std::endl;
// numeros.size() = representam os 4 numeros que foram determinados em cima 
// como tem 4 numeros  (4- 1) = 3, ou seja a posicão 3(400)

        return 0;
}

