#include <stdio.h>
#include <stdlib.h>
/*  NOME: Vinicius Eduardo Picinotto Silva
    RA: G093JC6
    TURMA: DS1P18
*/

int main()
{
    char nome[50];
    printf ("LISTA DE EXERCICIOS #2 - EXERCICIO 1\n\nFerramenta para ler e imprimir um nome na tela!\n\n");
    printf("->Insira seu nome: ");
    gets(nome);
    printf("Ola %s, e um prazer da minha parte lhe conhecer! c:", nome);
    return 0;
}
