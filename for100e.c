#include <stdio.h>

//must compile with -fopenmp
int main()
{
	#pragma omp parallel
	for(; ;){}
}
