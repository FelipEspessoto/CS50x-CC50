#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int altura;
    // faz a pergunta da altura ao usuario, se altura nao ficar entre 1 e 8, faz a pergunta de novo!
    do{
        altura = get_int("Insira um número de 1 a 8: ");
    } while (altura > 8 || altura < 1);
    printf("Altura será de: %d\n", altura);
    // linhas (para cada linha até q a linha seja igual a altura, itera mais uma linha)
    for(int linha = 1; linha <= altura; linha++){
        //cria os espaços de acordo com a fórmula de vazio < altura - linha
        for(int vazio = 0; vazio < altura - linha; vazio++){
            printf(" ");
        }
        // colunas (para cada linha, até que a coluna seja igual a linha, itera mais uma coluna)
        for(int coluna = 0; coluna < linha; coluna++){
            printf("#");
        }
        printf("\n");
    }
}
