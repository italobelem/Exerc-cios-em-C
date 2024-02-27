#include <stdio.h>
#include <locale.h>
#include <string.h>

/* 10. Fazer um programa que codifica uma string pelo método ZENIT-POLAR Z E N I T P O L A R 
Ou seja, onde aparece um 'Z' no string de entrada, aparecerá um 'P' na saída; e, semelhantemente, onde aparece um 'P' no string de entrada, 
aparecerá um 'Z' na saída. Isto deve ocorrer para todos os pares em ZENIT-POLAR, maiúsculas e minúsculas. 
As outras letras não são alteradas. Por exemplo, o string "Parabens a voce" é codificado para "Zitibols i veco". 
Ao se aplicar duas vezes a transformação, obtém-se o mesmo string, ou seja, a codificação de "Zitibols i veco" é "Parabens a voce" */

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





