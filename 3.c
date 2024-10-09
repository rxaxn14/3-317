#include <stdio.h>

void suma(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}

void resta(int *a, int *b, int *resultado) {
    *resultado = *a - *b;
}

void multiplicacion(int *a, int *b, int *resultado) {
    *resultado = *a * *b;
}

void division(int *a, int *b, float *resultado) {
    if (*b != 0) {
        *resultado = (float)*a / *b;
    } else {
        printf("Error: No se puede dividir entre cero.\n");
        *resultado = 0;
    }
}

int main() {
    int num1, num2, opcion;
    int resultado_int;
    float resultado_float;

    printf("Ingrese dos números: ");
    scanf("%d %d", &num1, &num2);

    printf("Seleccione la operación:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            suma(&num1, &num2, &resultado_int);
            printf("Resultado de la suma: %d\n", resultado_int);
            break;
        case 2:
            resta(&num1, &num2, &resultado_int);
            printf("Resultado de la resta: %d\n", resultado_int);
            break;
        case 3:
            multiplicacion(&num1, &num2, &resultado_int);
            printf("Resultado de la multiplicación: %d\n", resultado_int);
            break;
        case 4:
            division(&num1, &num2, &resultado_float);
            printf("Resultado de la división: %.2f\n", resultado_float);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
