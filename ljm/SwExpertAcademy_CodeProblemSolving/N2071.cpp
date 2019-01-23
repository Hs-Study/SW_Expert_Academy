#include <stdio.h>

void avrage() {
	int T, sum = 0, num;
	double dNum = 0;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		printf("#%d ", i);
		sum = 0;
		for (int j = 0; j < 10; j++) {
			scanf("%d", &num);
			sum += num;
		}
		dNum = sum / 10.0;
		printf("%.0f\n", dNum);
	}
}
int main() {
	avrage();
}