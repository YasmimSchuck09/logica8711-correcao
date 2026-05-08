#include<iostream>
#include<string>

int main(){

    std::string nome;
    int opcao;
    int opcaopagamento;
    float valorCurso;
    int desconto;
    int quantidadeParcela;
    std::string nomeCompleto;
    std::string email, nomeResponsavel, dataNascimento;
    std::string cpf, rg, telefone, cep;
    int idade;
    

    std::cout<<"Ola! Somos do Senac Novo Hamburgo! Digite seu nome para iniciarmos a nossa conversa: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Seja bem vindo(a): "<<nome<<" !"<<std::endl;
    std::cout<<"A escola Senac-NH conta um uma otima estrutura, professores qualificados e profissionais que estao sempre dispostos para ajudar nossos alunos! Nossa escola esta localizada no endereco Av. Nacoes Unidas, 3760, Novo Hamburgo. Qualque duvida ou se quiser conhecer nossa escola, sinta-se a vontade para vir conversar conosco! "<<std::endl;
    std::cout<<"Vamo comecar? "<<std::endl;
    std::cout<<"Escolha a melhor opcao para voce: "<<std::endl;
    std::cout<<"Digite 1 para os cursos presenciais ou 2 para cursos EAD: "<<std::endl;
    std::cin>>opcao;


    if(opcao == 1){
        std::cout<<"Aqui no Senac contamos com cursos presenciais em muitas areas! Temos cursos tecnicos e cursos livres. "<<std::endl;
        std::cout<<"Qual e o modelo no qual voce mais se interessa? "<<std::endl;
        std::cout<<"Digite 5 para curso Tecnico ou 6 para Curso Livre. "<<std::endl;
        std::cin>>opcao;


        switch(opcao){
            case 5:
                std::cout<<"Cursos Tecnicos disponiveis: Enfermagem com 1600 horas; Tecnico em Desenvolvimento de Sistemas(TDS) com 1216 horas e Tecnico em Modelagem com 800 horas."<<std::endl;
                std::cout<<"Deseja saber dos valores?"<<std::endl;
                std::cout<<"Caso queira se informar dos valores destes Cursos, responda ao pedido: 1 para Enfermagem, 2 para TDS ou 3 para Tecnico em Modelagem."<<std::endl;
    std::cin>>opcao;

          switch(opcao){
              case 1:
              valorCurso = 15.279;
              quantidadeParcela = 40;
                 std::cout<<"O valor do curso Tecnico de Enfermagem esta disponivel no valor de 15.278,49 que pode ser feito em ate 40x no boleto."<<std::endl;
              break;
              case 2:
              valorCurso = 14.805;
              quantidadeParcela = 30;
                std::cout<<"O valor do curso Tecnico de TDS esta disponivel no valor de 14.805,49 que pode ser feito em ate 30x no boleto."<<std::endl;
              break;
              case 3:
              valorCurso = 14.844;
              quantidadeParcela = 28;
                std::cout<<"O valor do curso Tecnico de Modelagem esta disponivel no valor de 14.884,79 que pode ser feito em ate 28x no boleto."<<std::endl;
              break;
              default:
                std::cout<<"Curso com valores nao existente!"<<std::endl;
                }
            break;

            case 6:
                std::cout<<"Cursos Livres disponiveis: Tecnica de costura, Consultoria de estilo e coloracao pessoal, Fotografia digital, Tecnicas basicas em cuidados aos idosos, Primeiros socorros, Informatica fundamental, Administracao, Excel e Power BI."<<std::endl;
                std::cout<<"Alem de todas essas variedades de cursos temos um muito interessante que e o de linguagens em Libras! E um curso extremamente importante nos ultimos tempos e que se encontra em um otimo valor: 1.575 em ate 3x no boleto!"<<std::endl;
            break;
            default:
                std::cout<<"Informacoes indisponiveis!"<<std::endl;
        }


    }else if(opcao == 2){
        std::cout<<"Aqui temos alem dos cursos presenciais, a possibilidade de estudar de forma totalmente online! No Senac NH possuimos varios cursos que voce pode fazer direto da sua casa! Aqui estao as opcoes de alguns que voce pode gostar: Gestao, Logistica, Seguranca mobiliaria, Administracao, Transacoes mobiliarias e Contabilidade."<<std::endl;
        std::cout<<"Voce teria interesse?"<<std::endl;
        std::cout<<"Escolha a opcao 1 se sua resposta for sim e 2 se for nao!"<<std::endl;
        std::cin>>opcao;

        switch(opcao){
            case 1:
                std::cout<<"Ficamos felizes com sua escolha! Para continuar a sua conversa conosco e obter mais informacoes, entre em contato pelo telefone: (xx) xxxx-xxxx - Senac NH."<<std::endl;
            break;
            case 2:
                std::cout<<"Que pena que vc nao gostou de nossas variedades de cursos! Qualquer coisa, entre neste mesmo e responda novamente de acordo com seus interesses. Estamos a disposicao!"<<std::endl;
            break;
            default:
                std::cout<<"Opcao nao existente!"<<std::endl;
        }
    }else{
        std::cout<<"Opcao invalida!"<<std::endl;

    }
std::cout<<"Mas antes de irmos para as opcoes de pagamento, vamos fazer o seu cadastro?"<<std::endl;
std::cout<<"----- Cadastro -----"<<std::endl;
std::cout<<"Precisamos de algumas informacoes suas para iniciarmos o seu cadastro: "<<std::endl;
std::cout<<"Digite seu nome completo: "<<std::endl;
std::getline(std::cin, nomeCompleto);

std::cout<<"Informe sua idade: "<<std::endl;
std::cin>>idade;

std::cout<<"Digite seu telefone de contato pessoal e outro do responsavel: "<<std::endl;
std::cin>>telefone;

std::cout<<"Insira o telefone do seu segundo contato para informacoes: "<<std::endl;
std::cin>>telefone;

std::cout<<"Informe seu RG:"<<std::endl;
std::cin>>rg;

std::cout<<"Digite seu CPF "<<std::endl;
std::cin>>cpf;

std::cout<<"Nome da mae: "<<std::endl;
std::cin>>nomeResponsavel;

std::cout<<"Informe sua data de nascimento: "<<std::endl;
std::cin>>dataNascimento;

std::cout<<"Adicione seu CEP: "<<std::endl;
std::cin>>cep;

std::cout<<"Informe seu email: "<<std::endl;
std::cin>>email;

std::cout<<"Agradeco as suas informacoes, criaremos o seu cadastro aqui no Senac - NH para darmos continuidade!"<<std::endl;


std::cout<<" ------Forma de pagamento ------ "<<std::endl;
std::cout<<"Escolha a melhor forma de pagamento para voce: "<<std::endl;
std::cout<<"1 - Cartao de credito (desconto de 6%)"<<std::endl;
std::cout<<"2 - Boleto"<<std::endl;
std::cout<<"3 - Pix (desconto de 10%)"<<std::endl;
std::cout<<"4 - Dinheiro (desconto de 10%)"<<std::endl;
std::cout<<"5 - Debito"<<std::endl;
std::cin>>opcaopagamento;

if(opcaopagamento == 3 || opcaopagamento == 4 || opcaopagamento == 5){
  desconto == valorCurso * 0.90;
  std::cout<<"O valor do seu curso sera: "<<desconto<<std::endl;
}else if(opcaopagamento == 1){
  desconto == valorCurso * 0.94;
  std::cout<<"O valor do seu curso sera: "<<desconto<<std::endl;
}else if(opcaopagamento == 2){
  std::cout<<"O valor do seu curso sera: "<<valorCurso<<" em ate "<<quantidadeParcela<<" x"<<std::endl;
}else{
  std::cout<<"Opcao de pagamento nao encontrada! "<<std::endl;
}


    return 0;
}
