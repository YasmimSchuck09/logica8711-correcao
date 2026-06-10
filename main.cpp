#include<iostream>
#include<string>

struct Loja{
    int id;
    std::string descricaoProduto;
    float preco;
    bool concluida;

};
Loja PRODUTO[50]; 
int totalProdutos;


void adicionar(){
    std::cout<<"--- Adicionar produtos ---"<<std::endl;

   std::cout<<"ID: ";
   std::cin>>PRODUTO[totalProdutos].id;

   std::cout<<"Preco: ";
   std::cin>>PRODUTO[totalProdutos].preco;

    std::cin.ignore();
    std::cout<<"Produto: ";
    std::getline(std::cin, PRODUTO[totalProdutos].descricaoProduto);

    PRODUTO[totalProdutos].concluida = false;

    totalProdutos++;
    std::cout<<"Produto adicionado!"<<std::endl;
}


    void exibir(){
        if(totalProdutos == 0){
            std::cout<<"\nNenhum produto!"<<std::endl;
            return;
        }
        std::cout<<"\n--- Produtos ---"<<std::endl;
        for(int i = 0; i < totalProdutos; i++){
            std::string status = PRODUTO[i].concluida ? "S" : "N";
            std::cout<<"["<<status<<"]"<<PRODUTO[i].id<<" - "<<PRODUTO[i].descricaoProduto<<std::endl;
        }
    }

        void menu(){
            std::cout<<"\n === TODO LIST ==="<<std::endl;
            std::cout<<"1. Adicionar"<<std::endl;
            std::cout<<"2. Exibir"<<std::endl;
            std::cout<<"3. Sair"<<std::endl;
            std::cout<<"Escolha: "<<std::endl;
        }
        int main(){
            menu();
            int opcao;
            
            while(true){
        
                std::cin>>opcao;

                switch(opcao){
                    case 1:
                        adicionar();
                        break;
                    case 2:
                        exibir();
                        break;
                    case 3: 
                        std::cout<<"Ate logo!"<<std::endl;
                        return 0;
                    default: 
                        std::cout<<"Opcao invalida!"<<std::endl;
                }
            }
            return 0;
        }