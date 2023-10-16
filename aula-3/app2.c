#include <stdio.h>
#include <omp.h>
int main(){
#pragma omp parallel
{
int id = omp_get_thread_num();
int totalThreads = omp_get_num_threads();
printf("ThreadId = %d, Total = %d\n",
id, totalThreads);
}
return 0;
}
