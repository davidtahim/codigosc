#include <stdio.h>

int main(){
    int numero[5];
    int i;
    //lendo os números
    for(i = 0; i < 5; i++){
        printf("Digite o número: ");
        scanf("%d", &numero[i]);
    }
    //imprimindo os números
    printf("Os números digitados foram: ");
    for(i = 0; i < 5; i++){
        printf("%d\n ", numero[i]);
    }
    return 0;
}