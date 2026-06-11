#include<iostream>
#include<string>

void bubblesort(int* arr, int tamanho){
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = 0; j < tamanho - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = std::size(arr);
    std::cout<<"Array original: "<<std::endl;
    for(int i = 0; i < tamanho; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";

    bubblesort(arr, tamanho);
    std::cout<<"Array ordenado: ";
    for(int i = 0; i < tamanho; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    return 0;
}