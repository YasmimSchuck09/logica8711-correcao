#include <iostream>
#include<string>

int main(){

      std::string nomes[3] = {"João", "Paula", "Murilo"};
      int idades[3] = {27, 31, 20};

      std::cout<<nomes[1]<<" tem "<<idades[1]<<" anos!"<<std::endl;
      std::cout<<nomes[2]<<" tem "<<idades[2]<<" anos!"<<std::endl;
      std::cout<<nomes[0]<<" tem "<<idades[0]<<" anos!"<<std::endl;

      
      return 0;
}