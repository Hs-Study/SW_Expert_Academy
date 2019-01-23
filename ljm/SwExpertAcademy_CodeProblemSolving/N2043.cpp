#include <stdio.h>
#include <ctype.h>
int main(void) {
	int P,K;
	scanf("%d", &P);
	scanf("%d", &K);

	printf("%d", P - K + 1);
	return 0;
}