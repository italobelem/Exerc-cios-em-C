#include <stdio.h>
#include <locale.h>

/* Leia dois valores, e exiba sua soma. Em seguida pergunte ao usu�rio: �Novo C�lculo(S/N)?�. 
Deve-se ler a resposta e se a resposta for �S� (sim), deve-se repetir todos os comandos (instru��es) novamente,
mas se for qualquer outra resposta, o algoritmo deveser finalizado escrevendo a mensagem �Fim dos C�lculos�. 
Escolha a op��o mais adequada de comando de loop para resolver este problema */

int main() {
    int valor1, valor2, resultado;
    char resposta;
	setlocale(0, "Portuguese");	

    do {
        printf("Digite dois valores para realizar uma opera��o ");
        scanf("%d %d", &valor1, &valor2);

        resultado = valor1 + valor2;

        printf("Resultado %d\n", resultado);

        printf("Novo c�lculo? (S/N) ");
        scanf(" %c", &resposta); 

    } while (resposta == 'S' || resposta == 's');

    printf("Fim dos C�lculos\n");

    return 0;
}




