#include<iostream>
#include<string>

void torredeHanoi(int n, std::string origem, std::string destino, std::string auxiliar){
    if(n == 1){
            std::cout<<"Mover disco "<<n<<" de "<<origem<<" para "<<destino<<std::endl;
            return;
    }
    torredeHanoi(n - 1, origem, auxiliar, destino);
    std::cout<<"Mover disco "<<n<<" de "<<origem<<" para "<<destino<<std::endl;
    torredeHanoi(n - 1, auxiliar,destino, origem);
}

int main(){
    int numDiscos;
    std::cout<<"Quantos discos: ";
    std::cin>>numDiscos;

    std::cout<<"\nSequencia de movimentos: "<<std::endl;
    torredeHanoi(numDiscos, "A", "C", "B");

    std::cout<<"\nTotal de movimentos: "<<(1 << numDiscos) - 1<<std::endl;

    return 0;
}