#include <stdio.h>

int main(){
    int matriz[2][2];
    int i, j;

    // loop de leitura da matriz

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //loop de impressão da matriz
    printf("\nMatriz digitada:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}