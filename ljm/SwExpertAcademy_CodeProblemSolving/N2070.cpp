#include <stdio.h>
void sign() {
	int T, sum = 0, num1, num2;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		printf("#%d ", i);
		sum = 0;
		scanf("%d", &num1); scanf("%d", &num2);
		if (num1 < num2)
			printf("<\n");
		else if (num1 == num2)
			printf("=\n");
		else
			printf(">\n");
	}
}
int main() {
	sign();
}