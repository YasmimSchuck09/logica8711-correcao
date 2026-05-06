#include<iostream>
#include<string>


int main(){

std::string nome;
int opcao;


std::cout<<"Ola! Somos do Senac Novo Hmaburgo! Digite seu nome para iniciarmos a nossa conversa: "<<std::endl;
std::cin>>nome;
 
 std::cout<<"Seja bem vindo(a): "<<nome<<" !"<<std::endl;

 std::cout<<"Escolha a melhor opçao para voce: "<<std::endl;
 std::cout<<"Digite 1 para os cursos presenciais ou 2 para cursos EAD: "<<std::endl;
 std::cin>>opcao;

 if(opcao == 1){
    std::cout<<"Aqui no Senac contamos com cursos presenciais em muitas areas! Temos cursos tecnicos e cursos livres. "<<std::endl;
    std::cout<<"Qual e o modelo no qual voce mais se interessa? "<<std::endl;
    std::cout<<"Digite 001 para curso Tecnico ou 002 para Curso Livre. "<<std::endl;
    std::cin>>opcao;

    switch(opcao){
      case 001:
      std::cout<<"Cursos Tecnicos disponiveis: Enfermagem com 1600 horas; Tecnico em Desenvolvimento de Sistemas(TDS) com 1216 horas e Tecnico em Modelagem com 800 horas."<<std::endl;
      break;
      case 002:
      std::cout<<" Cursos Livres disponiveis:Técnica de costura, Consultoria de estilo e coloração pessoal, Fotografia digital, Técnicas básicas em cuidados aos idosos, Primeiros socorros, Informática fundamental, Excel e Porwer BI "<<std::endl;
      default:
      std::cout<<"Cursos indisponiveis!"<<std::endl;
    }
    
}else if(opcao == 001){
  std::cout<<"Gostaria de saber dos valores?"<<std::endl;
  std::cout<<"Digite os numeros correspondentes para se informar dos valores de cada curso: 01 Enfermagem, 02 TDS ou 03 Modelagem."<<std::endl;
  std::cin>>opcao;

      switch(opcao){
        case 01:
          std::cout<<"O valor do curso Tecnico de Enfermagem esta disponivel no valor de 15.278,49 que pode ser feito em ate 40x no boleto."<<std::endl;
          break;
        case 02: 
          std::cout<<"O valor do curso Tecnico de TDS esta disponivel no valor de 14.805,49 que pode ser feito em ate 30x no boleto."<<std::endl;
          break;
        case 03: 
          std::cout<<"O valor do curso Tecnico de Modelagem esta disponivel no valor de 14.884,79 que pode ser feito em ate 28x no boleto."<<std::endl;
          break;
        default: 
          std::cout<<"Curso nao existente!"<<std::endl;
      }

 }

  return 0;
}