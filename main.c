#include <stdio.h>
#include <omp.h>
int main() {
    int i;
    int n = 10;

    @pragma omp parallel 
    for (i = 0; i < n; i++)
    {
        int thread = omp_get_thread_num();
        printf("Iteracion %d con thread %d\n", i, thread);
    }
    return 0;
}