#include<iostream>

// 3. Encontrar maior
// Leia 5 números e encontre o maior deles.

int encontrarMaior(int* arr, int tamanho)
//arr = o vetor de numeros
//tamnho = quantidade de elementos do vetor
{
    int maior = arr[0]; // como não sabemos qual é o maior, adicionamos o primeiro como maior
    for(int i = 1; i < tamanho; i++){ // aqui quer dizer que ele vai percorrer pelos outros numeros
        if(arr[i] > maior){
            maior = arr[i];
        }
    }
    return maior;
}
int main(){
    int arr[] = {3, 7, 2, 9, 1};
    std::cout<<"Maior elemento: "<<encontrarMaior(arr, 5)<<std::endl;
    return 0;
}
