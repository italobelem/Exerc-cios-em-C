#include <stdio.h>
#include <locale.h>

/* 8. Gere uma matriz 3x4 de inteiros, e pe�a para o usu�rio do programa preench�-la. Ap�s preenchida,
a) Informe qual foi o maior n�mero encontrado na matriz.
b) Informe qual foi o menor n�mero encontrado na matriz. */

int main() {
	
	setlocale(0, "Portuguese");
	int matriz[3][4];
	int i, j;
	
	printf("Digite 12 n�meros ");
	
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
	
	printf("\n O maior n�mero �: %d e o menor n�mero �: %d", maximo, minimo);

}


