#include<iostream>
#include<string>

struct Aluno{
    std::string nome;
    float nota1;
    float nota2;
};

float calcularMedia(Aluno a){
    return (a.nota1 + a.nota2) / 2;
}

int main(){

std::string aluno;
float nota1;
float nota2;

    std::cout<<"Digite o nome do aluno: "<<std::endl;
    std::cin>>aluno;

    std::cout<<"Determine a primeira nota do aluno: "<<nota1<<std::endl;
    std::cin>>nota1;

    std::cout<<"Determine a segunda nota do aluno: "<<nota2<<std::endl;
    std::cin>>nota2;

    std::cout<<"Nome do aluno: "<<aluno<<" possui 1 nota como: "<<nota1<<" e sua nota 2 e: "<<nota2<<" !"<<std::endl;

    // float media = calcularMedia(aluno);  

    return 0;
}