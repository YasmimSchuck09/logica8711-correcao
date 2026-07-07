#include<iostream>
#include<vector>

int main(){

std::vector<int>numeros; // variaveis

std::cout<<"Contar ocorrencias: "<<std::endl;

numeros.push_back(5);
numeros.push_back(10);
numeros.push_back(5);
numeros.push_back(15);
numeros.push_back(15);
numeros.push_back(5);
numeros.push_back(15);

std::cout<<"Vector: ";
for(int i = 0; i < numeros.size(); i++){
    std::cout<<numeros[i]<<" "; // aqui estou mostrando todos os numeros que foram determinados acima
}

int contador = 0;
for(int i = 0; i < numeros.size(); i++){ // aqui o contador começa no 0 e vai até a ultima posição
    if(numeros[i] == 5){  //se os numeros citados acima forem iguais a 5, CONTA QUANTOS TEM 
        contador++;
    }
}
std::cout<<"\nO numero 5 aparece: "<<contador<<" vezes!"<<std::endl;

        return 0;
}

