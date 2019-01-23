#include <stdio.h>
#include <stdlib.h>
void main() {
	int cnt;
	int n1,n2;
	int *p;
	scanf("%d", &cnt);
	p = (int*)malloc(sizeof(int) * 2 * cnt);
	for (int i = 0; i < cnt * 2; i+=2) {
		scanf("%d %d", &n1, &n2);
		p[i] = n1;
		p[i + 1] = n2;
	}
	for (int i = 0,j=1; i < cnt * 2; i += 2,j++) {
		printf("#%d %d %d\n", j, p[i] / p[i + 1], p[i] % p[i + 1]);
	}
}