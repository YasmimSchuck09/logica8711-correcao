#include <iostream>
#include<vector>

int main(){

std::vector<std::string>cars = {"Volvo", "BMW", "Mercedes"};
//vector é utilizado quando não sabemos a quantidade de itens. 

cars.push_back("Mazda");
//push back = é o item que ficara por ultimo na lista, item final. 

for(std::string car : cars){ //esta parte faz a função do for each
      std::cout<<car<<std::endl;

}

      return 0;
}