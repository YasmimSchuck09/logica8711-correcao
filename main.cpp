#include<iostream>

// 4. Encontrar menor
// Leia 5 números e encontre o menor deles.


int encontrarMenor(int* arr, int tamanho)
//arr = o vetor de numeros
//tamnho = quantidade de elementos do vetor
{
    int menor = arr[0];
    for(int i = 1; i < tamanho; i++){
        if(arr[i] < menor){
            menor = arr[i];
        }
    }
    return menor;
}
int main(){
    int arr[] = {1, 3, 5, 6, 7};
    std::cout<<"Menor elemento: "<<encontrarMenor(arr, 5)<<std::endl;
    return 0;
}