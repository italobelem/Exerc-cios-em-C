#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

#define MAX_PALAVRA 20
#define MAX_ERROS 27
#define MAX_PALAVRAS_BANCO 5

void jogar();
void menu();
void ranking();
void cadastrarPalavra();
void creditos();
void escolherOpcaoPalavra();
void limparBuffer(char *buf, int tamanho);
void escolherPalavraAleatoria();
void escolherPalavraManualmente();
void exibirForca();
void exibirErros();
void inicializarForca();
void mostrarResultado(int resultado);
void start();
int jogo();
int ehLetra(char c);
char maiuscula(char c);
void limpaBuffer();
char bancoPalavras[MAX_PALAVRAS_BANCO][MAX_PALAVRA] = {"JVGOSTOSO", "KUNK", "PATRICIA", "BIELGAY", "WALLACE"};

char palavra[MAX_PALAVRA];
char forca[MAX_PALAVRA];
char erros[MAX_ERROS];

int main(){
	menu();
	return 0;
}

void limparBuffer(char *buf, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        buf[i] = 0;
    }
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

void menu() {
    char opcao;
    do {
        system("cls"); 
        printf("          JOGO DA FORCA          ");
        printf("\n          1 - JOGAR               ");
        printf("\n          2 - RANKING             ");
        printf("\n          3 - CADASTRO DE PALAVRAS");
        printf("\n          4 - CRÉDITOS            ");
        printf("\n          5 - SAIR                ");
        printf("\n			Digite o número de uma opção: ");
        fflush(stdin);
        scanf(" %c", &opcao);

        switch (opcao) {
            case 1:
                jogar ();
                break;

            case 2:
                ranking ();
                break;

            case 3:
                cadastrarPalavra ();
                break;

            case 4:
                creditos ();
                break;

            case 5:
                break;

            default:
                printf("Opção inválida.\n");
                break;
        }

        void limpaBuffer(); 
    } while (opcao != '5');
}
void jogar (){
char bancoPalavras[MAX_PALAVRAS_BANCO][MAX_PALAVRA] = {"JVGOSTOSO", "KUNK", "PATRICIA", "BIELGAY", "WALLACE"};
int i;
char palavra[MAX_PALAVRA];
char forca[MAX_PALAVRA];
char erros[MAX_ERROS];
int tamanho;
float buf[i]; 

void limparBuffer(char *buf, int tamanho); {
    for (int i = 0; i < tamanho; i++) {
        buf[i] = 0;
    }
}

int ehLetra(char c); {
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

void escolherOpcaoPalavra() {
    int opcao;
    printf("\nEscolha a opção:\n");
    printf("1. PLAYER VS CPU\n");
    printf("2. PLAYER VS PLAYER\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            escolherPalavraAleatoria();
            break;
        case 2:
            escolherPalavraManualmente();
            break;
        default:
            printf("Opção inválida. Escolhendo palavra do banco.\n");
            escolherPalavraAleatoria();
    }
}

void exibirForca() {
    printf("\n%s\n", forca);
}

void exibirErros() {
    if (strlen(erros) > 0) {
        printf("Erros: %s\n", erros);
    }
}

void inicializarForca() {
    for (int i = 0; palavra[i] != 0; i++) {
        char c = palavra[i];
        forca[i] = ehLetra(c) ? '_' : c;
    }
}

void mostrarResultado(int resultado) {
    printf("\n");
    if (resultado == 0) {
        printf("Você perdeu. A palavra era %s\n", palavra);
    } else {
        printf("Parabéns, você acertou! a palavra era: %s\n", palavra);
    }
}

void start() {
    limparBuffer(forca, MAX_PALAVRA);
    limparBuffer(erros, MAX_ERROS);
    
    escolherOpcaoPalavra();
    
    inicializarForca();

    printf("\nBem-vindo ao Jogo da Forca!\n");
}

int jogo() {
    char tentativa;
    int chances = 5;

    int letras = 0;
    for (int i = 0; palavra[i] != 0; i++) {
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
        for (int i = 0; erros[i] != 0; i++) {
            if (erros[i] == maiuscula(tentativa)) {
                jaTentou = 1;
                break;
            }
        }

        if (jaTentou) continue;

        int ganhou = 1;
        int achou = 0;
        for (int i = 0; palavra[i] != 0; i++) {
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

int main() {
	setlocale(0,"portuguese");
    start();
    int resultado = jogo();
    mostrarResultado(resultado);
    return 0;
}
}

void ranking() {
    // função mostrar ranking 
}

void cadastrarPalavra() {
    // função de cadastrar palavra 
}

void creditos() {
    printf("Feito por: Biel, Thiago, João Victor, Italo e Antônio.\n");
    printf("Pressione Enter para voltar ao menu.");
    limparBuffer(); // Limpar o buffer antes de continuar
    getchar(); // Aguardar o Enter
}



  

