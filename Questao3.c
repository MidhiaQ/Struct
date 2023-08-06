#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço
e telefone de 5 pessoas e os imprima em ordem alfabética.*/

struct informacoes{
    char nome[100];
    char endereco[100];
    char telefone[20];
};


int main(){
    
    struct informacoes pessoa[5];
    int i;

    printf("\nDigite os dados\n");

    for(i = 0; i < 5; i++){
        printf("\nNome:");
         scanf(" %[^\n]%*c", pessoa[i].nome);
        printf("\nEndereco:");
         scanf(" %[^\n]%*c", pessoa[i].endereco);
        printf("\nTelefone:");
         scanf(" %[^\n]%*c", pessoa[i].telefone);
    }

    int a;
    for(i = 0; i < 5; i++){
        for(a = 0; a < 5; a++){
            if(strcmp(pessoa[a].nome, pessoa[a+1].nome) > 0){
    struct informacoes temp=pessoa[a];
        pessoa[a] = pessoa[a+1];
        pessoa[a+1] = temp;
            }
            
        }
    }

    printf("\nNomes em ordem alfabetica:\n");
    for(i = 0; i < 5; i++){
        printf("%s\n", pessoa[i].nome);
    } 

    return 0;
}
