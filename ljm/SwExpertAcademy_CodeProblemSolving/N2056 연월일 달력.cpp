#include <stdio.h>

int main(void) {
	int T,temp,sum=0;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++) {
		printf("#%d ",i);
		scanf("%d", &temp);

		if (!(temp % 100 >= 1)) {//1보다 크거나같지 않으면
			printf("-1\n");
			break;
		}
		switch ((temp % 10000) / 100) {
		case 1:	case 3:case 5:case 7:case 8:case 10:
			if (!(temp % 100 <= 31)) {
				printf("-1\n");
				continue;
			}
			break;
		case 2:
			if (!(temp % 100 <= 28)) {
				printf("-1\n");
				continue;
			}
			break;
		case 4:case 6:case 9:case 11:case 12:
			if (!(temp % 100 <= 30)) {
				printf("-1\n");
				continue;
			}
			break;
		default:
			printf("-1\n");
			continue;
		}
		printf("%04d/%02d/%02d\n", temp / 10000, (temp % 10000) / 100, temp % 100);
	}
	return 0;
}