#include <stdio.h>

void main() {
	int num;

	scanf("%d", &num);
	while (1) {
		if (num <= 30)
			break;
		scanf("%d", &num);
	}
	for (int i = 1,j=1; i <= num + 1; i++,j*=2)
		printf("%d ", j);
}