#include <stdio.h>
#include <locale.h>
#include <string.h>

/* 9. Algoritmo para ler um nome completo, com espaços e acentuação (atenção para o formato passado para o scanf()). 
Em seguida exiba o nome de três formas diferentes:
a) texto normal, utilizando a máscara de formatação string (%s).
b) exiba cada uma das palavras do nome em linhas diferentes – use o espaço para separar as palavras */

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


