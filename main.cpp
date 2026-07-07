#include<iostream>
#include<vector>

int main(){

    std::vector<int>numeros;
    int quantidade;

    std::cout<<"Adicionar usuario"<<std::endl;

    std::cout<<"Quantos numeros?"<<std::endl;
    std::cin>>quantidade;

    for(int i = 0; i < quantidade; i++){
        int numero; 
        
        std::cout<<"Digite o numero "<<(i + 1)<<": ";
        std::cin>>numero;

        numeros.push_back(numero);
    }

    std::cout<<"Numeros adicionados: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    
    return 0;
}

