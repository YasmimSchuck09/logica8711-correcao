// 11. Buscar elemento ============================================================
// Leia 10 números e procure por um número específico. Se encontrar, exiba a posição.
#include<iostream>

int main(){
int numeros[] = {10,20,30,40,50,60,70,80,90,100};
int tamanho = 10;
int buscado;

std::cout<<"==== Buscar numero ===="<<std::endl;
std::cout<<std::endl;
std::cout<<"Array: ";
for(int i = 0; i < tamanho; i++){
    std::cout<<numeros[i]<<" ";
}
std::cout<<std::endl;
std::cout<<"Digite o numero a buscar: ";
std::cin>>buscado;

int posicao = -1;
for(int i = 0; i < tamanho; i++){
    if(numeros[i] == buscado){
        posicao = i;
        break;
    }
}
    std::cout<<std::endl;
if(posicao != -1){
    std::cout<<"Encontrado na posicao "<<posicao<<std::endl;
}else{
    std::cout<<"Não encontrado!"<<std::endl;
}
    return 0;
}
