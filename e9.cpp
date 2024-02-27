#include <stdio.h>
#include <locale.h>
#include <string.h>

/* 9. Algoritmo para ler um nome completo, com espa�os e acentua��o (aten��o para o formato passado para o scanf()). 
Em seguida exiba o nome de tr�s formas diferentes:
a) texto normal, utilizando a m�scara de formata��o string (%s).
b) exiba cada uma das palavras do nome em linhas diferentes � use o espa�o para separar as palavras */

int main() {
    char nome[100]; 

    printf("Digite o nome completo: ");
    scanf(" %[^\n]s", nome); 

    printf("Nome normal: %s\n", nome);

    printf("Nome separado por palavras:\n");
    char *token = strtok(nome, " "); 
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

}


