#include <stdio.h>
#include <omp.h>
int main(){
printf("Região Sequencial - 1\n");
#pragma omp parallel
{
printf("Região Paralela\n");
}
printf("Região Sequencial - 2\n");
return 0;
}
