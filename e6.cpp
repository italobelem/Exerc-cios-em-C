#include <stdio.h>
#include <locale.h>

/* Pergunte ao usuário qual o tamanho do quadrado que ele quer que seja desenhado; Por exemplo, se ele informar 5 por 5, o desenho ficará assim:
X X X X X 
X X X X X
X X X X X
X X X X X
X X X X X */

int main() {
	
	setlocale(0, "Portuguese");	
    int tamanho;
    
    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("X ");
        }
        printf("\n");
    }

    return 0; 
}

