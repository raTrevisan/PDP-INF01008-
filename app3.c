#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
int N = atoi (argv[1]);

#pragma omp parallel for
for(int i = 0; i < N; i++) {
	printf("thread %d - A [%d]\n", omp_get_thread_num(), i);
}
return 0;
}
