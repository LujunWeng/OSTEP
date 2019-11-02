#include <stdlib.h>
#include <stdio.h>

#define g_n (100 * 1024)
char a[g_n];

int main(int argc, char* argv[])
{
	char* p;
	int n;

	if (argc < 2) {
		printf("%s n[MBytes]\n", argv[0]);
	}

	n = 1024 * 1024 * atoi(argv[1]);
	p = malloc(n);
	if (p == NULL) {
		printf("malloc failed!\n");
		return 1;
	}

	for (;;) {
		for (int i = 0; i < n; ++i) {
			p[i] = i;
			if (i < g_n) a[i] = i;
		}
	}
			
	return 0;
}
