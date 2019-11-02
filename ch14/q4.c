#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int* a = (int *) malloc(sizeof(int));
	*a = 4;
	printf("%d\n", *a);
	return 0;
}
