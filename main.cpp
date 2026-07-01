#include<iostream>

// 5. Calcular média =====================
// Leia 5 números, calcule a média e exiba.


float calcularMedia(int numeros[], int tamanho) {
int soma = 0;
for (int i = 0; i < tamanho; i++) {
soma += numeros[i];
}
return soma / (float)tamanho;
}
int main() {
int numeros[5];
for (int i = 0; i < 5; i++) {
std::cout<<"Digite um numero: "<<std::endl;
std::cin>>numeros[i];
}
float media = calcularMedia(numeros, 5);
std::cout << "A media dos valores e: " << media << std::endl;
return 0;
}
