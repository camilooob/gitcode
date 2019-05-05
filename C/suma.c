#include <stdio.h>
int main()
{
    int num1, num2, resultado;
    int a = 10;
    int b = 20;
    printf("ingrese el primer valor\n");
    scanf("%d", &num1);
    printf("ingrese el segundo valor\n");
    scanf("%d", &num2);
    resultado = a * b * num1 + num2;
    printf("el resultado de la suma es:%d\n", resultado);
    return 0;
}
