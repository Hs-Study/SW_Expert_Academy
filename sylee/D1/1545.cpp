#include <stdio.h>

void main() {
	int num;
	
	scanf("%d", &num);

	for (int i = num; i >= 0; i--)
		printf("%d ", i);
}