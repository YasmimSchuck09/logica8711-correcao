#include<iostream>
#include<string>

int main(){

//blAlmount: valor em reais| exchangeRate: Taxa de Câmbio| usAlmount: Valor em dólares
double brlAmount, exchangeRate, usdAmount;
int choice;

std::cout<<"---- Currency Converter: BRL to USD ------"<<std::endl;

//Entreda de taxa de câmbio (quanto vale 1 dolar hoje)

      std::cout<<"Enter de current exchange rate ( How much is 1 dollar in Reais?)"<<std::endl;
      std::cin>>exchangeRate;

      // Entrada da quantia em reaisque a pessoa deseja converter
      std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
      std::cin>>brlAmount;

      //Verificação lógica: garante que o valor informado seja positivo 
      if(brlAmount > 0){
            //cálculo divide o montante em reais pela taxa de câmbio
            usdAmount = brlAmount / exchangeRate;
            std::cout<<"You will have $"<<usdAmount<<" US Dollars."<<std::endl;
      }else{
            //Mensagem de erro caso o vlaor seja zero ou negativo
            std::cout<<"Error: Please enter a valid amount grater than zero."<<std::endl;
      }

      return 0;
}