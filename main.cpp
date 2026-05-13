#include <iostream>
#include <string>

int main(){

    std::string nome;
    int opcao;
    int opcaopagamento;

    float valorCurso = 0;
    float desconto = 0;

    int quantidadeParcela = 0;

    std::string nomeCompleto;
    std::string email, nomeResponsavel, dataNascimento;
    std::string cpf, rg, telefone, telefoneResponsavel, cep;

    int idade;

    std::cout<<"Ola! Somos do Senac Novo Hamburgo! Digite seu nome para iniciarmos a nossa conversa: "<<std::endl;
    std::getline(std::cin, nome);

    std::cout<<"Seja bem vindo(a): "<<nome<<" !"<<std::endl;

    std::cout<<"A escola Senac-NH conta com uma otima estrutura, professores qualificados e profissionais que estao sempre dispostos para ajudar nossos alunos!"<<std::endl;

    std::cout<<"Nossa escola esta localizada no endereco Av. Nacoes Unidas, 3760, Novo Hamburgo."<<std::endl;

    std::cout<<"Qualquer duvida ou se quiser conhecer nossa escola, sinta-se a vontade para vir conversar conosco!"<<std::endl;

    std::cout<<"Vamos comecar? "<<std::endl;

    std::cout<<"Escolha a melhor opcao para voce: "<<std::endl;
    std::cout<<"Digite 1 para cursos presenciais ou 2 para cursos EAD: "<<std::endl;
    std::cin>>opcao;

    if(opcao == 1){

        std::cout<<"Aqui no Senac contamos com cursos presenciais em muitas areas!"<<std::endl;
        std::cout<<"Temos cursos tecnicos e cursos livres."<<std::endl;

        std::cout<<"Digite 5 para Curso Tecnico ou 6 para Curso Livre: "<<std::endl;
        std::cin>>opcao;

        switch(opcao){

            case 5:

                std::cout<<"Cursos Tecnicos disponiveis:"<<std::endl;
                std::cout<<"1 - Enfermagem"<<std::endl;
                std::cout<<"2 - Tecnico em Desenvolvimento de Sistemas (TDS)"<<std::endl;
                std::cout<<"3 - Tecnico em Modelagem"<<std::endl;

                std::cout<<"Escolha o curso desejado: "<<std::endl;
                std::cin>>opcao;

                switch(opcao){
                    case 1:
                        valorCurso = 15278.98;
                        quantidadeParcela = 40;
                        std::cout<<"O curso Tecnico de Enfermagem possui 1600 horas."<<std::endl;
                        std::cout<<"Valor: R$ 15.278,98 em ate 40x no boleto."<<std::endl;
                    break;

                    case 2:
                        valorCurso = 14805.49;
                        quantidadeParcela = 30;

                        std::cout<<"O curso Tecnico em Desenvolvimento de Sistemas possui 1216 horas."<<std::endl;
                        std::cout<<"Valor: R$ 14.805,49 em ate 30x no boleto."<<std::endl;
                    break;

                    case 3:
                        valorCurso = 14844.79;
                        quantidadeParcela = 28;
                        std::cout<<"O curso Tecnico em Modelagem possui 800 horas."<<std::endl;
                        std::cout<<"Valor: R$ 14.844,79 em ate 28x no boleto."<<std::endl;
                    break;

                    default:
                        std::cout<<"Curso nao encontrado!"<<std::endl;

                }

            break;

            case 6:

                std::cout<<"Cursos Livres disponiveis:"<<std::endl;
                std::cout<<"- Tecnica de Costura"<<std::endl;
                std::cout<<"- Consultoria de Estilo"<<std::endl;
                std::cout<<"- Fotografia Digital"<<std::endl;
                std::cout<<"- Primeiros Socorros"<<std::endl;
                std::cout<<"- Informatica Fundamental"<<std::endl;
                std::cout<<"- Excel e Power BI"<<std::endl;

                valorCurso = 1575.00;
                quantidadeParcela = 3;
                std::cout<<"Curso destaque: Libras"<<std::endl;
                std::cout<<"Valor: R$ 1.575,00 em ate 3x no boleto."<<std::endl;
            break;

            default:
                std::cout<<"Opcao invalida!"<<std::endl;

            break;
        }

    }else if(opcao == 2){

        std::cout<<"Aqui possuimos diversos cursos EAD!"<<std::endl;

        std::cout<<"Algumas opcoes:"<<std::endl;
        std::cout<<"- Gestao"<<std::endl;
        std::cout<<"- Logistica"<<std::endl;
        std::cout<<"- Administracao"<<std::endl;
        std::cout<<"- Contabilidade"<<std::endl;

        std::cout<<"Voce teria interesse?"<<std::endl;
        std::cout<<"Digite 1 para SIM ou 2 para NAO: "<<std::endl;

        std::cin>>opcao;

        switch(opcao){

            case 1:
                std::cout<<"Ficamos felizes com sua escolha!"<<std::endl;
                std::cout<<"Entre em contato pelo telefone: (xx) xxxx-xxxx"<<std::endl;
            break;

            case 2:
                std::cout<<"Que pena! Qualquer coisa estaremos a disposicao."<<std::endl;
            break;

            default:
                std::cout<<"Opcao nao existente!"<<std::endl;
                
            break;
        }

    }else{

        std::cout<<"Opcao invalida!"<<std::endl;
    }

    if(valorCurso > 0){

        std::cout<<"\n----- CADASTRO -----"<<std::endl;

        std::cin.ignore();

        std::cout<<"Digite seu nome completo: "<<std::endl;
        std::getline(std::cin, nomeCompleto);

        std::cout<<"Informe sua idade: "<<std::endl;
        std::cin>>idade;

        std::cout<<"Digite seu telefone pessoal: "<<std::endl;
        std::cin>>telefone;

        std::cout<<"Digite o telefone do responsavel: "<<std::endl;
        std::cin>>telefoneResponsavel;

        std::cout<<"Informe seu RG: "<<std::endl;
        std::cin>>rg;

        std::cout<<"Digite seu CPF: "<<std::endl;
        std::cin>>cpf;

        std::cin.ignore();

        std::cout<<"Nome da mae ou responsavel: "<<std::endl;
        std::getline(std::cin, nomeResponsavel);

        std::cout<<"Informe sua data de nascimento: "<<std::endl;
        std::cin>>dataNascimento;

        std::cout<<"Adicione seu CEP: "<<std::endl;
        std::cin>>cep;

        std::cout<<"Informe seu email: "<<std::endl;
        std::cin>>email;

        std::cout<<"Cadastro realizado com sucesso!"<<std::endl;

        std::cout<<"\n------ FORMA DE PAGAMENTO ------"<<std::endl;

        std::cout<<"1 - Cartao de credito (6% de desconto)"<<std::endl;
        std::cout<<"2 - Boleto"<<std::endl;
        std::cout<<"3 - Pix (10% de desconto)"<<std::endl;
        std::cout<<"4 - Dinheiro (10% de desconto)"<<std::endl;
        std::cout<<"5 - Debito"<<std::endl;

        std::cin>>opcaopagamento;

        if(opcaopagamento == 3 || opcaopagamento == 4){

            desconto = valorCurso * 0.90;

            std::cout<<"Valor final com desconto: R$ "<<desconto<<std::endl;

        }else if(opcaopagamento == 1){

            desconto = valorCurso * 0.94;

            std::cout<<"Valor final com desconto: R$ "<<desconto<<std::endl;

        }else if(opcaopagamento == 5){

            std::cout<<"Valor final: R$ "<<valorCurso<<std::endl;

        }else if(opcaopagamento == 2){

            std::cout<<"Valor final: R$ "<<valorCurso<<std::endl;
            std::cout<<"Parcelamento em ate "<<quantidadeParcela<<"x"<<std::endl;

        }else{

            std::cout<<"Opcao de pagamento nao encontrada!"<<std::endl;
        }
    }

    return 0;
}