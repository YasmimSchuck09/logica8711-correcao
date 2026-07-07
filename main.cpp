#include<iostream>
#include<vector>

int main(){

std::vector<int>numeros; // variaveis

std::cout<<"Buscar elemento: "<<std::endl;

numeros.push_back(100);
numeros.push_back(200);
numeros.push_back(300);
numeros.push_back(400);

std::cout<<"Vector: ";
for(int i = 0; i < numeros.size(); i++){
    std::cout<<numeros[i]<<" "; // aqui estou mostrando todos os numeros que foram determinados acima
}

int buscado = 300;
int posicao = -1;

for(int i = 0; i < numeros.size(); i++){ 
    if(numeros[i] == buscado){ //se um dos numeros for igual a 300, mostrar sua posição
        posicao = i;
        break;
    }
}
if(posicao != -1){ 
    std::cout<<"\nNumero "<<buscado<<" encontrado na posicao "<<posicao<<std::endl;
}else{
    std::cout<<"\nNumero não encontrado!"<<std::endl;
}
        return 0;
}

