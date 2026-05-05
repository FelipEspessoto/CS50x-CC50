#include <stdio.h>
int main(void) {
    int altura;
    do{
        printf("Altura: ");
        scanf("%d", &altura);
    }while (altura < 1 || altura > 8);
    for (int linha = 1; linha <= altura; linha++) {
        for (int espaco = 0; espaco < (altura - linha); espaco++) {
            printf(" ");
        }
        for (int coluna = 0; coluna < linha; coluna++) {
            printf("#");
        }
        // Cria os espaços que vêm depois da primeira pirâmide
        printf("  ");
        // Adiciona a segunda pirâmide
        for (int coluna2 = 0; coluna2 < linha; coluna2++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
