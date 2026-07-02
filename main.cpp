#include<iostream>

// 12. Números acima da média ===================================
// Leia 8 números, calcule a média e exiba quais estão acima dela.

int main() {
    int numeros[8] = {1,2,3,4,5,6,7,8};
    int soma = 0;

    std::cout << "==== NUMEROS ACIMA DA MEDIA ====" << std::endl;
    for (int i = 0; i < 8; i++) {
        soma += numeros[i];
    }
    float media = soma / 8.0; // pois tem 8 valores

    std::cout<<std::endl;
    std::cout<<"Media: "<<media<<std::endl;
    std::cout << "Numeros acima da media: ";
    for (int i = 0; i < 8; i++) {
        if (numeros[i] > media) {
            std::cout << numeros[i] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
