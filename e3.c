#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três. */

int main() {

setlocale(0, "Portuguese");	
int numero1, numero2, numero3;


printf("Digite 3 números ");
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

printf("%d é o menor número", minimo);

}
