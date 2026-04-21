#include <iostream>
#include<string>

int main(){

std::string letras[2][4] = {
      {"A", "B", "C", "D"},
      {"E", "F", "G", "H"},
};

std::cout<<letras[1][0]<<std::endl;
//contagem sempre começa do 0, ou seja 1= fila 1, letra 0

      return 0;
}