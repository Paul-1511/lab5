#include <stdio.h>
#include <omp.h>

int main() {
    int variable1 = 0;
    int variable2 = 0;
    const int N = 10; // Número de iteraciones

    #pragma omp parallel for shared(variable1) private(variable2)
    for (int i = 0; i < N; ++i) {
        variable1 += i;
        variable2 -= i;
    }

    printf("Valor final de variable1: %d\n", variable1);
    printf("Valor final de variable2: %d\n", variable2);

    return 0;
}
