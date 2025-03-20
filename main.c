#include <stdio.h>

void somatoria(int x, int y){
    int i;
    long int soma = 0;
    for(i = x; i <= y; i++) {
        soma += i;
    }
    printf("\nA somatória é %ld\n", soma);
}

int main(void) {
    int x, y;
    printf("\n\nDigite o número x: ");
    scanf("%d", &x);
    printf("\n\nDigite o número y: ");
    scanf("%d", &y);
    somatoria(x, y);
    return 0;
}

