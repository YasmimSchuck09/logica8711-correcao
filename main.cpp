#include<iostream>
#include<string>

struct Tarefa{
    int id; // numero identificador 
    std::string descricao; // texto
    bool concluida; // trará a resposta como true or false 

};
Tarefa tarefas[50]; // aqui eu puxei a struct (podendo ter ate 50 tarefas nela)
int totalTarefas = 0; // aqui eu digo que começa a partir do 0

void adicionar(){
    std::cout<<"\n --- Adicionar tarefas ---"<<std::endl; // título

    std::cout<<"ID: ";
    std::cin>>tarefas[totalTarefas].id; // ID da tarefa

    std::cin.ignore();
    std::cout<<"Descricao: ";
    std::getline(std::cin, tarefas[totalTarefas].descricao);

    tarefas[totalTarefas].concluida = false;

    totalTarefas++;
    std::cout<<"Tarefa adicionada!"<<std::endl;
}

    void listar(){
        if(totalTarefas == 0){
            std::cout<<"\nNenhuma tarefa!"<<std::endl;
            return;
        }
        std::cout<<"\n--- Tarefas ---"<<std::endl;
        for(int i = 0; i < totalTarefas; i++){
            std::string status = tarefas[i].concluida ? "S" : "N";
            std::cout<<"["<<status<<"]"<<tarefas[i].id<<" -  "<<tarefas[i].descricao<<std::endl;
        }
    }

        void marcarConcluida(){
            int idBuscado;
            std::cout<<"\nID da tarefa: ";
            std::cin>>idBuscado;

            for(int i = 0;i< totalTarefas; i++){
                if(tarefas[i].id == idBuscado){
                    tarefas[i].concluida = true;
                    std::cout<<"Marcada como concluida!"<<std::endl;
                    return;
                }
            }
            std::cout<<"Tarefa nao encontrada!"<<std::endl;
        }

        void menu(){
            std::cout<<"\n === TODO LIST ==="<<std::endl;
            std::cout<<"1. Adicionar"<<std::endl;
            std::cout<<"2. Listar"<<std::endl;
            std::cout<<"3. Marcar concluida"<<std::endl;
            std::cout<<"4. Sair"<<std::endl;
            std::cout<<"Escolha: "<<std::endl;
        }
        int main(){
            int opcao;
            
            while(true){
        
                std::cin>>opcao;

                switch(opcao){
                    case 1:
                        adicionar();
                        break;
                    case 2:
                        listar();
                        break;
                    case 3: 
                        marcarConcluida();
                        break;
                    case 4:
                        std::cout<<"Ate logo!"<<std::endl;
                        return 0;
                    defaul:
                        std::cout<<"Opcao invalida!"<<std::endl;
                }
            }
            return 0;
        }