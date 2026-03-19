#include <stdio.h>

int main(){
    int matriz[2][2];
    int i, j, soma=0;

    // loop de leitura da matriz

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //loop de soma da matriz
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           soma += matriz[i][j];
        }
    }
    printf("Soma dos elementos da matriz: %d\n", soma);
    return 0;
}