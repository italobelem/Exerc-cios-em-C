#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

#define MAX_PALAVRA 20
#define MAX_ERROS 27
#define MAX_PALAVRAS_BANCO 5

char bancoPalavras[MAX_PALAVRAS_BANCO][MAX_PALAVRA] = {"LUA", "BARRIGA", "REDE", "COMPUTADOR", "ASFALTO"};

char palavra[MAX_PALAVRA];
char forca[MAX_PALAVRA];
char erros[MAX_ERROS];

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int ehLetra(char c) {
    return isalpha(c);
}

char maiuscula(char c) {
    return islower(c) ? toupper(c) : c;
}

void escolherPalavraAleatoria() {
    srand(time(NULL));
    int indice = rand() % MAX_PALAVRAS_BANCO;
    strcpy(palavra, bancoPalavras[indice]);
}

void escolherPalavraManualmente() {
    printf("\nDigite uma palavra: ");
    scanf("%19s", palavra);
}

void creditos() {
    printf("Feito por: Biel, Thiago, João Victor, Italo e Antônio.\n");
    printf("Pressione Enter para voltar ao menu.");
	    limparBuffer();
	    getchar();
}

void menu();

void exibirForca() {
    printf("\n%s\n", forca);
}

void exibirErros() {
    if (strlen(erros) > 0) {
        printf("Erros: %s\n", erros);
    }
}

void inicializarForca() {
	int i;
    for (i = 0; palavra[i] != 0; i++) {
        char c = palavra[i];
        forca[i] = ehLetra(c) ? '_' : c;
    }
}

void mostrarResultado(int resultado) {
    printf("\n");
    if (resultado == 0) {
        printf("Você perdeu. A palavra era %s\n", palavra);
        exit(0);
    } else {
        printf("Parabéns, você acertou a palavra %s\n", palavra);
        exit(0);
    }
}

int jogo() {
    char tentativa;
    int chances = 5;

    int letras = 0;
    int i;
    for (i = 0; palavra[i] != 0; i++) {
        if (ehLetra(palavra[i])) letras++;
    }

    while (chances > 0) {
        system("cls"); // Substitua por uma abordagem mais portátil, se necessário
        exibirForca();
        exibirErros();

        printf("\nChances: %d - a palavra tem %d letras\n", chances, letras);
        printf("\nDigite uma letra: ");
        scanf(" %c", &tentativa);

        if (!ehLetra(tentativa)) continue;

        int jaTentou = 0;
        for (i = 0; erros[i] != 0; i++) {
            if (erros[i] == maiuscula(tentativa)) {
                jaTentou = 1;
                break;
            }
        }

        if (jaTentou) continue;

        int ganhou = 1;
        int achou = 0;
        for (i = 0; palavra[i] != 0; i++) {
            if (!ehLetra(palavra[i])) continue;
            if (forca[i] == '_') {
                if (maiuscula(palavra[i]) == maiuscula(tentativa)) {
                    forca[i] = palavra[i];
                    achou = 1;
                } else {
                    ganhou = 0;
                }
            }
        }

        if (ganhou) {
            return 1;
        }
        if (!achou) {
            chances--;
            erros[strlen(erros)] = maiuscula(tentativa);
        }
    }

    return 0;
}

void start() {
    int escolha;
    
    // Escolhe se deseja uma palavra do banco (1) ou digitar manualmente (2)
    printf("\nEscolha a opção:\n");
    printf("1. Palavra do banco\n");
    printf("2. Digitar uma palavra\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        escolherPalavraAleatoria();
    } else if (escolha == 2) {
        escolherPalavraManualmente();
    } else {
        printf("Opção inválida. Escolhendo palavra do banco.\n");
        escolherPalavraAleatoria();
    }
    
    // Inicializações e configurações
    inicializarForca();

    // Chama a função de jogo
    int resultado = jogo();
    mostrarResultado(resultado);

    // Chama o menu novamente
    menu();
}

void menu() {
    char option;
    do {
        system("cls");
        printf("          JOGO DA FORCA          ");
        printf("\n          1 - JOGAR           ");
        printf("\n          2 - CRÉDITOS		");
        printf("\n          3 - SAIR            ");
        printf("\n			Digite o n�mero de uma op��o: ");
        fflush(stdin);
        scanf(" %c", &option);

        switch (option) {
            case '1':
                start();
                break;

            case '2':
                creditos();
                break;

            case '3':
                exit(0);
                break;

            default:
                printf("Op��o inv�lida. Encerrando programa.\n");
                exit(0);
//                escolherPalavraAleatoria(); 
                break;
        }
    } while (option != '5');
}

int main() {
	setlocale (0,"portuguese");
    menu();
    return 0;
}
