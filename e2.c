#include <stdio.h>
#include <locale.h>

/*Ler um n�mero e dizer se ele est� contido no intervalo entre 10 e 15, onde 10 e 15 tamb�m pertencem ao intervalo. */

int main() {

setlocale(0, "Portuguese");	
int numero;

printf("Digite um n�mero ");
scanf("%d", &numero);

if (numero >= 10 && numero <= 15){
	
	printf("%d est� dentro do intervalo", numero);
	
}

else {
	
	printf("%d est� fora do intervalo", numero);
	
}
	
}
