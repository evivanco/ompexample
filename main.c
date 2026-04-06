#include <stdio.h>
#include <omp.h>
#include <time.h>
int main() {
    clock_t inicio, fin;
    double time_ms;
    int i;
    int n = 1200000;
    inicio = clock();
    @pragma omp parallel 
    for (i = 0; i < n; i++)
    {
        int thread = omp_get_thread_num();
        printf("Iteracion %d con thread %d\n", i, thread);
    }
    fin = clock();
    time_ms = ((double)(fin - inicio)/CLOCKS_PER_SEC)*1000;
    printf("t(ms) : %.8f", time_ms)
    return 0;
}