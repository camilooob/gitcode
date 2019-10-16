#include <stdio.h>
int main()
{
    int num1, num2, resultado;
    int a = 10;
    int b = 20;
    printf("ingrese el primer valor\n");
    /*leemos el valor que el usuario ingresa y lo almacenamos con scanf*/
    /*scanf tiene dos argumentos: tipo de dato "%d" entero decimal, y la ruta o variable donde se guardara*/
    scanf("%d", &num1);
    printf("ingrese el segundo valor\n");
    scanf("%d", &num2);
    resultado = a * b * num1 + num2;
    printf("el resultado de la suma es:%d\n", resultado);
    return 0;
}
/*Operadores Logicos*/
/*Problema de git solucionado con tokens*/