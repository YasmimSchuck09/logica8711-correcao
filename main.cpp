#include<iostream>

int main(){

int a = 10;
int b = 6;

std::cout<<((a > b) && (a + b) >= 16)<<std::endl;
// && é uma necessidade 
std::cout<<((a > b) || (a + b) >= 16)<<std::endl;
// || é uma opção

    return 0;
}