#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa para armazenar um livro de receitas e:
- Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de
ingredientes e ingredientes.
- Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o
vetor de ingredientes, sendo que cada ingrediente contem nome e quantidade*/

typedef struct ingredientes{
    char nome[25];
    int quantidade;
}ing;

typedef struct receita{
    char nome[25];
    int quantidade_de_ingredientes;
    ing Ingredientes[10];
}receitas;


int main(void){
    int i, a;
    receitas dados[5];

    for(i = 0; i < 5; i++){
        printf("\nNome da receita:");
        scanf("%s", dados[i].nome);
        printf("\nQuantidade de ingredientes:");
        scanf("%d", &dados[i].quantidade_de_ingredientes);
        printf("\nIngredientes:");

        for(a = 0; a < dados[i].quantidade_de_ingredientes; a++){
          printf("\nNome do ingrediente %d: ", a + 1);  
            scanf("%s", dados[i].Ingredientes[a].nome);
          printf("\nQuantidade do ingrediente %d: ", a + 1);  
            scanf("%d", &dados[i].Ingredientes[a].quantidade);    
            }
    }
    
}
