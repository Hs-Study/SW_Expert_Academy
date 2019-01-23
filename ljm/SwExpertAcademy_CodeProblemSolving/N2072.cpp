#include <stdio.h>
void odd_add() {
	int number,sum, n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("#%d ", i);
		sum = 0;
		for (int j = 0; j < 10; j++) {
			scanf("%d", &number);
			if(number % 2 != 0)
				sum += number;
		}
		printf("%d\n", sum);
	}
}
int main() {
	odd_add();
}