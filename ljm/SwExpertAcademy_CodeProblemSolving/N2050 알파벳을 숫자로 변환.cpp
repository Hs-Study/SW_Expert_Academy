#include <stdio.h>

int main(void) {
	int i=0; char test[200];
	scanf("%s", test);
	
	while (test[i] != NULL) {
		printf("%d ", test[i++] - 64);
	}
	return 0;
}