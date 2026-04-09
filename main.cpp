#include<iostream>
#include<iostream>

int main(){

std::string user;
std::string senha;

std::cout<<"Digite seu usuario de acesso: "<<std::endl;
std::cin>>user;

std::cout<<"Digite sua senha: "<<std::endl;
std::cin>>senha;

if(senha == "123456789"){
std::cout<<"O usuario "<<user<<" está logado com sucesso!!"<<std::endl;
}else{
      std::cout<<"Usuário ou senha inválidos!"<<std::endl;
}


      return 0;
}