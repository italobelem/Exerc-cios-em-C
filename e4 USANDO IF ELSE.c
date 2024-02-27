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

if (idade >= 5 && idade <= 7){ 
    printf("Sua categoria é infantil A");              
}   
   
else if (idade >= 8 && idade <= 10){  
    
	printf("Sua categoria é infantil B");
	                 
}      

else if (idade >= 11 && idade <= 13){    
    printf("Sua categoria é juvenil A");              

}
     
else if (idade >= 14 && idade < 17){
    printf("Sua categoria é juvenil B");   
	           
}
 
else if (idade >= 17 && idade <= 100){         
	printf("Sua categoria é Sênior");              
}
     
else { 
    printf("Inválido");     

}


}
