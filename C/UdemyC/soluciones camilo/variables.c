#include <stdio.h>
int main()
{
    char C = 'y';            // tamaño de 1 byte 0 ... 255  son caracteres printf(%c);
    int a = 20;              // 2 bytes -32768.... 32767 printf(%i);
    short e = -1;            // 2 bytes -128 .... 127 printf(%i);
    unsigned int u = 25;     // 2 bytes 0.... 65535 Entero positivo imprime i printf(%i);
    long l = 5932;           // 4 bytes -2147483648... 2147483647 printf(%li);
    float f = 72.538;        // 4 bytes printf(%f);
    double d = 12323.877658; // 8 bytes printf(%lf);
    printf("%.2lf\n", d);
    return 0;
}
/* Tipos de datos */