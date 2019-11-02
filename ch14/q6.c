#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int* ar = (int *) malloc(100 * sizeof(int));

	ar[10] = 101;

	free(ar);

	printf("%d\n", ar[10]);
	return 0;
}
