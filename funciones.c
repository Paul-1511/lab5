#include <stdio.h>
#include <omp.h>

void calcularFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    printf("Factorial de %d: %d\n", n, factorial);
}

void generarFibonacci(int n) {
    int a = 0, b = 1, c;
    printf("Serie de Fibonacci (%d elementos): ", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

void encontrarMaximo(int arr[], int n) {
    int maximo = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
    }
    printf("Maximo en el arreglo: %d\n", maximo);
}

int main() {
    int arreglo[] = {10, 25, 7, 42, 18};
    int numElementos = sizeof(arreglo) / sizeof(arreglo[0]);

    #pragma omp parallel sections
    {
        #pragma omp section
        calcularFactorial(5); // Calcula el factorial de 5

        #pragma omp section
        generarFibonacci(10); // Genera los primeros 10 números de Fibonacci

        #pragma omp section
        encontrarMaximo(arreglo, numElementos); // Encuentra el máximo en el arreglo
    }

    return 0;
}
