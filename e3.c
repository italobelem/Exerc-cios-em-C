#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo que leia 3 n�meros e diga qual � o menor entre os tr�s. */

int main() {

setlocale(0, "Portuguese");	
int numero1, numero2, numero3;


printf("Digite 3 n�meros ");
scanf("%d %d %d", &numero1, &numero2, &numero3 );

int minimo = numero1;

if (minimo > numero2) 
{
minimo = numero2;

}

if (minimo > numero3) 
{
minimo = numero3;
}

printf("%d � o menor n�mero", minimo);

}
