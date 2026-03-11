#include <stdio.h>

int main(){
    int limite, i,j;
    printf("Digite até a tabuada que você deseja ver: ");
    scanf("%d", &limite);
    printf("\n--- Gerando todas as tabuadas ate %d ---\n\n", limite);

    for (i=1; i<=limite; i++) {
        printf("Tabuada do %d:\n", i);
        for (j=1; j<=10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}



