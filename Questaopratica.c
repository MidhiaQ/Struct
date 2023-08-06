#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct vende{
    char nome[20];
    int cpf;
}vendedor;

typedef struct carro{
    char marca[20];
    char modelo[20];
    int ano;
    char placa[20];
    float valor;
    struct vende vendedor;
}carro;

int main(){
    carro car[3];
    int maiscaro = 0;
    for(int i = 0; i < 3; i++){
        printf("Informe o nome do vendedor:\n");
            scanf("%s", car[i].vendedor.nome);
        printf("\nInforme o CPF do vendedor:\n");
            scanf("%d", &car[i].vendedor.cpf);
        printf("\nInforme a marca do %d carro:\n", i+1);
            scanf("%s", car[i].marca);
        printf("\nInforme o modelo do %d carro:\n", i+1);
            scanf("%s", car[i].modelo);
        printf("\nInforme o ano do %d carro:\n", i+1);
            scanf("%d", &car[i].ano);   
        printf("\nInforme a placa do %d carro:\n", i+1);
            scanf("%s", car[i].placa);
        printf("\nInforme o valor do %d carro:\n", i+1);
            scanf("%f", &car[i].valor);     
    
                if(car[i].valor > maiscaro){
                    maiscaro = car[i].valor;
                }
    }
            printf("O carro mais caro e: %d", maiscaro);    
    
    return 0;
}
