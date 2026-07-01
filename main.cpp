#include<iostream>

// 6. Contar elementos ======================================
// Leia um array com 10 números e exiba quantos elementos tem.
#include<string>

int main(){

int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tamanho = sizeof(num) / sizeof(num[0]);
std::cout<<tamanho<<std::endl;
      return 0;
}