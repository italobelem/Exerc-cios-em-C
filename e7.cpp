#include <stdio.h>
#include <locale.h>

/* 7. Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor.
a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.
b) Pergunte ao usu�rio qual n�mero ele quer pesquisar e diga quantas vezes este n�mero est� presente no vetor */

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
	
	printf("Digite o n�mero a ser pesquisado: \n");
	scanf("%d", &numero);
	
for (int i = 0; i < 10; i++){
	
	if (vetor[i] == numero){
		contadordor++;
	}
	
}
	printf("Quantidade de %d: %d", numero, contadordor);
	
}
