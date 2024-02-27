#include <stdio.h>
#include <locale.h>

/* Leia o ano de nascimento de um nadador, calcule sua idade, e classifique-o em uma das categorias:
Infantil A --- de 5 a 7 anos* 
Infantil B --- de 8 a 10 anos* 
Juvenil A --- de 11 a 13 anos*
Juvenil B --- de 14 a 17 anos* 
Sênior  --- maiores de 17 anos* 
Obs.: Utilize como ano atual o ano de 2021.
Faça um algoritmo utilizando IF ELSE e outro utilizando SWITCH CASE
O programa deve fornecer uma saída do tipo:Nadador de idade “idade” é da categoria “categoria. */

int main() {

setlocale(0, "Portuguese");	

int idade, ano;

printf("Digite o ano em que você nasceu ");
scanf("%d", &ano);

idade = 2021-ano;

if (idade <= 4 || idade > 100){
	printf("Inválido");
}
if (idade > 17){
	idade = 17;
}
switch (idade){
	
	case 5:
	case 6:
	case 7:
		printf("Sua categoria é Infantil A");
		break;
	case 8:
	case 9:
	case 10:
		printf("Sua categoria é Infantil B");
		break;
	case 11:
	case 12:
	case 13:
		printf("Sua categoria é Juvenil A");
		break;
	case 14:
	case 15:
	case 16:
		printf("Sua categoria é Juvenil B");
		break;
	case 17:
		printf("Sua categoria é Sênior");
		break;
}

}
