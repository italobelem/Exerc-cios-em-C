#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Pedir ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela.
a) exiba como caractere (%c).
b) exiba como inteiro (%d).
c) exiba como hexadecimal (%x). */

int main() {

setlocale(0, "Portuguese");
int caracter;

printf("Digite um caracter ");
scanf("%d", &caracter);

printf("%c em caracter \n", caracter); 
printf("%d em inteiro \n", caracter);
printf("%x em hexadecimal \n", caracter);
	
	
}
