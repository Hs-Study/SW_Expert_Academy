#include <stdio.h>

void reserve(int n) {
	if (n < 0)
		return;
	printf("%d ", n);
	reserve(n - 1);
}
int main() {
	int num;
	scanf("%d", &num);
	reserve(num);
}