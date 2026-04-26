#include <stdio.h>
#include "operaciones.h"

int main() {
    int a = 20;
    int b = 8;

    printf("Proyecto propio con Makefile\n");
    printf("Suma: %d + %d = %d\n", a, b, sumar(a, b));
    printf("Resta: %d - %d = %d\n", a, b, restar(a, b));
    printf("Multiplicacion: %d * %d = %d\n", a, b, multiplicar(a, b));

    return 0;
}