#include<stdio.h>

int main()
{
    float nota1, nota2;
    printf("Calculador de notas\n");
    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    
    printf("A sua média é %f", (nota1+nota2)/2);
    
    
    
    return 0;
}
