# lab5
Lab 5

# Repositorio de Ejercicios en C

Este repositorio contiene ejercicios de programas en lenguaje C. Cada programa aborda un concepto específico y utiliza características de OpenMP para la programación paralela.

## Suma (Suma.c)

Este programa calcula la suma de los primeros N números naturales utilizando un ciclo `for` paralelo con OpenMP. También mide el tiempo de ejecución utilizando `omp_get_wtime()`.

### Compilación
Para compilar el programa, asegúrate de tener instalado el compilador de C (por ejemplo, GCC). Luego, ejecuta:
gcc -fopenmp -o Suma Suma.c
### Ejecución
./Suma



## Funciones (funciones.c)

Este programa ejecuta tres funciones diferentes en paralelo utilizando la directiva #pragma omp sections. Las funciones son: cálculo del factorial de un número, generación de la serie de Fibonacci y búsqueda del máximo en un arreglo.

### Compilación
Compila el programa con:
gcc -fopenmp -o Funciones Funciones.c
### Ejecución
./Funciones



## Ciclos (ciclos.c)

Este programa modifica dos variables de manera paralela utilizando las cláusulas shared y private en un ciclo `for`. Compara los resultados obtenidos con ambas cláusulas.

### Compilación
Compila el programa con:
gcc -fopenmp -o Ciclos Ciclos.c
### Ejecución
Ejecuta el programa con:
./Ciclos
