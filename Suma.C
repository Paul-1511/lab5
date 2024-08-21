#include <stdio.h>
#include <omp.h>

int main() {
    const int N = 1000000;
    double start_time, end_time;
    double sum = 0.0;

    start_time = omp_get_wtime();

    #pragma omp parallel for reduction(+:sum)
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    end_time = omp_get_wtime();

    printf("La suma de los primeros %d numeros naturales es %.0f\n", N, sum);
    printf("Tiempo de ejecucion: %.6f segundos\n", end_time - start_time);

    return 0;
}