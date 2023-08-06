#include <stdio.h>
#include <stdlib.h>

typedef struct end{
    char rua[20];
    char cidade[20];
    char bairro[20];
    int cep;
} endereco;

typedef struct cad{
    char nome[20];
    float salario;
    int idade;
    int cpf;
    int tel;
    struct end endereco;
} cadastro;

int main(){
    cadastro cadastro[3];
    int maioridade = 0;
    int maiorsalario = 0;
    for(int i = 0; i < 3; i++){
        printf("\nDigite o nome da pessoa %d:\n", i+1);
            scanf("%s", cadastro[i].nome);
        printf("\nDigite o salario da pessoa %d:\n", i+1);
            scanf("%f", &cadastro[i].salario);
        printf("\nDigite a idade da pessoa %d:\n", i+1);
            scanf("%d", &cadastro[i].idade);
        printf("\nDigite o CPF da pessoa %d:\n", i+1);
            scanf("%d", &cadastro[i].cpf);
        printf("\nDigite o telefone da pessoa %d:\n", i+1);
            scanf("%d", &cadastro[i].tel);
        printf("\nDigite o nome da rua da pessoa %d:\n", i+1);
            scanf("%s", cadastro[i].endereco.rua);
        printf("\nDigite a cidade da pessoa %d:\n", i+1);
            scanf("%s", cadastro[i].endereco.cidade);
        printf("\nDigite o bairro da pessoa %d:\n", i+1);
            scanf("%s", cadastro[i].endereco.bairro);
        printf("\nDigite o CEP da pessoa %d:\n", i+1);
            scanf("%d", &cadastro[i].endereco.cep);

    if(cadastro[i].idade > maioridade){
        maioridade = i;
    }
    if(cadastro[i].salario > 2000){
        maiorsalario = cadastro[i].salario;
        maiorsalario++;
    }
}
    printf("A mais velha e: %d", maioridade);
    printf("\nSalarios maior que dois mil: %d", maiorsalario);

    return 0;
}
