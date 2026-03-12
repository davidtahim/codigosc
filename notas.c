#include <stdio.h>

int main() {
    float notas[5];
    float soma,media;
    int i;

    for (i=0;i<5;i++) {
      printf("Digite a nota %d: ", i+1);  
      scanf("%f", &notas[i]);
      soma += notas[i];
    }
    media = soma/5;
    printf("A média das notas é: %.2f\n\n", media);
    return 0;
}