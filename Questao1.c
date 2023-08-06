#include <stdio.h> 

/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura. Exiba os dados armazenados ao final.*/

struct pessoa{ /*Criação da struct e o nome dela*/
    char nome[30]; /*Variavel criada em vetor*/
    int idade;
    char endereco[50]; /*Vetor tambem*/
};

 int main(){ 

struct pessoa dados; /*Renomeação da struct*/

printf("Informe os dados: "); /*Função para exibir na tela o que vai ser pedido*/
scanf("%s %d %[^\n]s", &dados.nome, &dados.idade, &dados.endereco); /*Função que lê o que está sendo pedido*/
printf("\nNome:%s\nIdade:%d\nEndereco:%s", dados.nome, dados.idade, dados.endereco); 
/*Mostra o que está sendo lido*/
  
  return 0;   
  
  
 }
