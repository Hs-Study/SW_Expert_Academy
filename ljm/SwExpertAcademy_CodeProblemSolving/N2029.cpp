#include <stdio.h>
int main(void) {
	int test,a,b;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d %d", &a, &b);
		printf("$%d %d %d\n", i + 1,a/b,a%b);
	}

	return 0;
}