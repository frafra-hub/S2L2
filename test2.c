#include <stdio.h>

int main(){

    int x,y;
    printf("\nInserisci primo numero: ");
    scanf("%d",&x);
    printf("\nInserisci secondo numero: ");
    scanf("%d",&y);
    float media = ((float)x+y)/2;
    printf("\nLa media aritmetica tra i due numeri è: %.1f",media);

    return 0;
}