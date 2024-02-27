#include <stdio.h>
#include <locale.h>

/* 8. Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê-la. Após preenchida,
a) Informe qual foi o maior número encontrado na matriz.
b) Informe qual foi o menor número encontrado na matriz. */

int main() {
	
	setlocale(0, "Portuguese");
	int matriz[3][4];
	int i, j;
	
	printf("Digite 12 números ");
	
	for (int i = 0; i < 3; i++){
		
		for (int j = 0; j < 4; j++){
			scanf("%d", &matriz [i][j]);	
		}
	}
	
	int maximo = 0;
	
	for (int i = 0; i < 3; i++){
		
		for (int j = 0; j < 4; j++){
		
			if (matriz[i][j] > maximo){
				maximo = matriz [i][j];
			}
	
		}

	}
	
	int minimo = matriz[i][j];
	
	for (int i = 0; i < 3; i++){
		
		for (int j = 0; j < 4; j++){
		
			if (minimo > matriz[i][j]){
				minimo = matriz [i][j];
			}	
			
		}
	}
	
	printf("\n O maior número é: %d e o menor número é: %d", maximo, minimo);

}


