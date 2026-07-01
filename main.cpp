#include<iostream>

// 9. Inverter array ========================
// Leia 5 números e exiba-os em ordem inversa.
int main(){
    int num[5];
    int topo = -1;

    std::cout<<"===== Numeros ====="<<std::endl;
    std::cout<<std::endl;
    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;
    topo = 4;

    std::cout<<"Ordem dos numeros: 10, 20, 30, 40, 50"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Devolvendo..."<<std::endl;
    while(topo >= 0){
        std::cout<<"Removido: "<<num[topo]<<std::endl;
        topo--;
    }
    return 0;
}