//Faça um programa que leia um número inteiro positivo N e imprima todos
//os números naturais de 0 até N em ordem crescente.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,i = 0;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    for (;i < n; i++ && n++){
        printf("%d", &n);
    }
    
}