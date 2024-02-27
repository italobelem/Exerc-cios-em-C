#include <stdio.h>
#include <locale.h>
#include <string.h>

/* 10. Fazer um programa que codifica uma string pelo m�todo ZENIT-POLAR Z E N I T P O L A R 
Ou seja, onde aparece um 'Z' no string de entrada, aparecer� um 'P' na sa�da; e, semelhantemente, onde aparece um 'P' no string de entrada, 
aparecer� um 'Z' na sa�da. Isto deve ocorrer para todos os pares em ZENIT-POLAR, mai�sculas e min�sculas. 
As outras letras n�o s�o alteradas. Por exemplo, o string "Parabens a voce" � codificado para "Zitibols i veco". 
Ao se aplicar duas vezes a transforma��o, obt�m-se o mesmo string, ou seja, a codifica��o de "Zitibols i veco" � "Parabens a voce" */

int main(){

   char polar[] = {'p','o','l','a','r'};
   char zenit[] = {'z','e','n','i','t'};
   char frase[50];

   printf("FRASE: "); fgets(frase, 50, stdin);

       for (int i=0;i<50;i++){

           tolower(frase[i]);

       }

       for (int j=0;j<strlen(frase);j++){

           for (int k=0;k<5;k++){

               if (frase[j]==zenit[k]) frase[j] = polar[k];

               else if (frase[j]==polar[k]) frase[j] = zenit[k];

           }

           printf("%c",frase[j]);

       }

   return 0;

}





