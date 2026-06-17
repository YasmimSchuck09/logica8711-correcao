#include<iostream>
#include<string>

int main(){
    std::string time1, time2;
    int gols1, gols2;

    std::cout<<"===== CALCULADOR DE PLACAR ====="<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Time 1: ";
    std::cin>>time1;
    std::cout<<"Gols time 1:";
    std::cin>>gols1;

    std::cout<<"Time 2:";
    std::cin>>time2;
    std::cout<<"Gols time 2:";
    std::cin>>gols2;

    std::cout<<std::endl;
    std::cout<<"===== RESULTADO ====="<<std::endl;
    std::cout<<time1<<" "<<gols1<<" x "<<gols2<<" "<<time2<<std::endl;
    std::cout<<std::endl;

    if(gols1 > gols2){
        std::cout<<"O time "<<time1<<" ganhou do time "<<time2<<" !"<<std::endl;
    }else if(gols2 > gols1){
        std::cout<<"O time "<<time2<<" ganhou do time "<<time1<<" !"<<std::endl;
    }else{
        std::cout<<"O jogo ficou com o placar empatado!"<<std::endl;
    }

    return 0;
    }