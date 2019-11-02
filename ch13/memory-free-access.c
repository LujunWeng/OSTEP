#include <stdlib.h>
#include <stdio.h>


int main(int argc, char* argv[])
{
	char* p;

	p = malloc(1);
	*p = 'a';
	printf("%c\n", *p);
	free(p);
	printf("%c\n", *p);

	return 0;
}
