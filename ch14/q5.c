#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int* ar = (int *) malloc(100 * sizeof(int));

	ar[100] = 0;

	printf("%d\n", ar[100]);
	return 0;
}
