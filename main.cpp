#include<iostream>
#include<vector>

int main(){

    std::vector<int>numeros; // identificando as variaveis

    std::cout<<"===== VECTOR (Arraylist em C++) ====="<<std::endl; // titulo

    numeros.push_back(10); // determinando todos os valores
    numeros.push_back(20);
    numeros.push_back(30);
    
    std::cout<<"Numeros: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Tamanho: "<<numeros.size()<<std::endl;

    int posicao = 2;
    std::cout<<"Digite uma posicao: "<<std::endl;
    std::cin>>posicao;
    numeros.erase(numeros.begin() + posicao);

    std::cout<<"Apos remover: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
        return 0;
}

