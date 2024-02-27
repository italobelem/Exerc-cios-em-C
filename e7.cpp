#include <stdio.h>
#include <locale.h>

/* 7. Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor.
a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
b) Pergunte ao usuário qual número ele quer pesquisar e diga quantas vezes este número está presente no vetor */

int main() {
	int vetor[10];
	int numeros;
	setlocale(0, "Portuguese");
	
	printf("Digite 10 numeros: ");
	
for (int i = 0; i < 10; i++){
	scanf("%d", &vetor [i]);
}
	int contador = 0;
	
for (int i = 0; i < 10; i++){
	
	if (vetor[i] == 3){
		contador++;
	}
}
	printf("Quantidade de 3: %d", contador);

	int contadordor = 0;
	int numero;
	
	printf("Digite o número a ser pesquisado: \n");
	scanf("%d", &numero);
	
for (int i = 0; i < 10; i++){
	
	if (vetor[i] == numero){
		contadordor++;
	}
	
}
	printf("Quantidade de %d: %d", numero, contadordor);
	
}
