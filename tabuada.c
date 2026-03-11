#include <stdio.h>
int numero,i;

int main(){
    printf("Digite qual a tabuada que deseja: ");
    scanf("%d", &numero);

    for (i=1; i<=10; i++) {
        printf("%d x %d = %d\n", numero, i, numero*i);
    }
    return 0;
}