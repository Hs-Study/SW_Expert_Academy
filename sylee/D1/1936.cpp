#include <stdio.h>

char win(int a, int b) {
	if (a == 1) {
		if (b == 2) return 'B';
		else return 'A';
	}
	else if (a == 2) {
		if (b == 1) return 'A';
		else return 'B';
	}
	else {
		if (b == 1) return 'B';
		else return 'A';
	}
}
void main() {
	int a;
	int b;
	scanf("%d %d", &a, &b);
	while (1) {
		if (a != b)
			break;
		scanf("%d %d", &a, &b);
	}
	printf("%c", win(a, b));

}