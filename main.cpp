#include<iostream>

int main(){

int fila[10]; // aqui esta descrito que tem 10 espaços ao todo para essa pilha
int inicio = 0;
int fim = 0;
int opcao;

std::cout<<"===== FILA COM MENU ====="<<std::endl;

while(true){
    std::cout<<std::endl;
    std::cout<<"1. Enfileirar"<<std::endl;
    std::cout<<"2. Desenfileirar"<<std::endl;
    std::cout<<"3. Exibir fila"<<std::endl;
    std::cout<<"4. Sair"<<std::endl;
    std::cout<<"Escolha: "<<std::endl;
    std::cin>>opcao;

    if(opcao == 1){
        if(fim < 10){
            int valor;
            std::cout<<"Digite o valor: ";
            std::cin>>valor;
            fila[fim] = valor;
            fim++;
            std::cout<<"Enfileirado!"<<std::endl;
        }else{
            std::cout<<"fila cheia!"<<std::endl;
        }
    }else if(opcao == 2){
        if(inicio < fim){
            std::cout<<"Removido: "<<fila[inicio]<<std::endl;
            inicio++;
        }else{
            std::cout<<"Fila vazia!"<<std::endl;
        }
    }else if(opcao == 3){
        if(inicio < fim){
            std::cout<<"Fila: ";
            for(int i = inicio; i < fim; i++){
                std::cout<<fila[i]<<" ";
            }
            std::cout<<std::endl;
        }else{
            std::cout<<"Fila vazia!"<<std::endl;
        }
    }
    else if(opcao == 4){
        std::cout<<"Saindo..."<<std::endl;
        break;
    }
}
    return 0;
}