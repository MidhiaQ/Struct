#include <stdio.h>
#include <stdlib.h>
//Bibliotecas

/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura
deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda
prova e nota da terceira prova.yes
a) Permita ao usuário entrar com os dados de 5 alunos.yes
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior média geral.
d) Encontre o aluno com menor média geral
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor
6 para aprovação. */

    struct aluno{ //Estrutura criada para armazenar os dados dos alunos
        int matricula; 
        char nome[100];
        float n1, n2, n3;
    //Variáveis com as informações que seram usadas na estrutura    
    };

int main(){
    struct aluno dados[5]; //Renomeação da estrutura, criação do vetor para receber 5 alunos
    int i; //Variável de controle
    
    for(i = 1; i < 6; i++){ //Laço de repetição para receber as informações dos 5 alunos
        printf("\nMatricula do %i aluno:" , i);
        scanf("%i", &dados[i].matricula);
        printf("\nNome do %i aluno: ", i);
        scanf("%s", dados[i].nome);
        printf("\nDigite a primeira nota: ");
        scanf("%f", &dados[i].n1);
        printf("\nDigite a segunda nota: ");
        scanf("%f", &dados[i].n2);
        printf("\nDigite a terceira nota: ");
        scanf("%f", &dados[i].n3);
    }
    float maiornota=0;
    int maiorum = 0;
    for(i=1; i<6; i++){ //Condição para saber quem tem a primeira maior nota
        if(dados[i].n1 > maiornota){ //Comparação das notas
           maiornota = dados[i].n1;
           maiorum = i;
        }
    } 
    printf("\nMaior primeira nota e %.1f do aluno %s", dados[maiorum].n1, dados[maiorum].nome);

    float maiormedia = 0;
    float menormedia = 0;
    float media;

    int MaiorMedia = 0;
    int MenorMedia = 0;

    maiormedia = (dados[0].n1 + dados[0].n2 + dados[0].n3)/3;
    menormedia = (dados[0].n1 + dados[0].n2 + dados[0].n3)/3;
    //Conta das medias
    for(i=1; i<6; i++){ //Laço de repetição para receber as notas dos alunos e fazer a media para descobrir quem tem a maior 
        media = (dados[i].n1 + dados[i].n2 + dados[i].n3)/3;
        if (media > maiormedia){
            maiormedia = media;
            MaiorMedia = i;
        }
    }

    printf("\nA maior media e %.1f do aluno %s", maiormedia, dados[MaiorMedia].nome);

    for(i=1; i<6; i++){ //Descobrir a menor media
        media = (dados[i].n1 + dados[i].n2 + dados[i].n3)/3;
        if(media < maiormedia){
            menormedia = media;
            MenorMedia = i;
        }
    }

    printf("\nA menor media e %.1f do aluno %s", menormedia, dados[MenorMedia].nome);

    for(i=1; i<6; i++){ //Condições para saber se o aluno foi aprovado ou não
        media = (dados[i].n1 + dados[i].n2 + dados[i].n3)/3;
        if(media >= 6){
            printf("\nAluno %s APROVADO!", dados[i].nome);
        }
        else{
            printf("\nAluno %s REPROVADO", dados[i].nome);
        }
    }

    return 0;
}
