#include <stdio.h>
int T;
int main(void) {
	scanf("%d", &T);
	int max,temp;
	for (int i = 1; i <= T; i++) {
		scanf("%d", &max);
		for (int j = 0; j < 9; j++) {
			scanf("%d", &temp);
			if (max < temp)
				max = temp;
		}
		printf("#%d %d\n", i, max);
	}
	return 0;
}