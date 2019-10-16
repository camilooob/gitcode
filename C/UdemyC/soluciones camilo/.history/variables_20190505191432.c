#include <stdio.h>
int main()
{
    char X 0 "y";            // tamaño de 1 byte 0 ... 255
    int a = 20;              // 2 bytes -32768.... 32767
    short e = -1;            // 2 bytes -128 .... 127
    unsigned int u = 25;     // 2 bytes 0.... 65535
    long l = 5932;           // 4 bytes -2147483648... 2147483647
    float f = 72.538;        // 4 bytes
    double d = 12323.877658; // 8 bytes
    printf("%.2lf\n", d);
    return 0;
}