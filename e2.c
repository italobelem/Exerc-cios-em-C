#include <stdio.h>
#include <locale.h>

/*Ler um número e dizer se ele está contido no intervalo entre 10 e 15, onde 10 e 15 também pertencem ao intervalo. */

int main() {

setlocale(0, "Portuguese");	
int numero;

printf("Digite um número ");
scanf("%d", &numero);

if (numero >= 10 && numero <= 15){
	
	printf("%d está dentro do intervalo", numero);
	
}

else {
	
	printf("%d está fora do intervalo", numero);
	
}
	
}
