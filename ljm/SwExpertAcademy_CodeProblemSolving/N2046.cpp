#include <stdio.h>

void cnt_num() {
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
		printf("#");
}
int main() {
	cnt_num();
}