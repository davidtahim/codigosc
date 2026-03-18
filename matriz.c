#include <stdio.h>

int main() {
   
    int mat[3][3];

    //preencher a matriz
    mat[0][0]=10;
    mat[0][1]=20;
    mat[1][2]=30;
    mat[2][2]=99;

    //imprimir a matriz

    printf("O valor da matriz mat[0][0]= %d\n", mat[0][0]);
    printf("O valor da matriz mat[1][2]= %d\n", mat[1][2]);

//Matriz inicializada diretamente
    int m[][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("O valor da matriz m[2][1]= %d\n", m[2][1]);

    //usando loops com i e j para preencher a matriz
    int n[3][4];
    int i,j;
    int lin=3,col=4;

    //leitura e digitação da matriz
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Digite o valor da posição n[%d][%d]: ", i,j);
            scanf("%d", &n[i][j]);
        }
    
    }
    return 0;
    }