#include<iostream>

 int main(){
    int numeros[5] = {5, 10, 15, 2, 12};
    	std::cout<<"Numeros: "<<std::endl;
    for(int i = 0; i < 5; i++){
        std::cout<<numeros[i]<<" ";
    }
    return 0;
}
