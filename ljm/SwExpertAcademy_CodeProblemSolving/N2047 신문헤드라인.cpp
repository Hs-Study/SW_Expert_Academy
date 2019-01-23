#include <stdio.h>
#include <ctype.h>
int main(void) {
	int i=0; char test[80];
	scanf("%s", test);
	
	while (test[i] != NULL) {
		if (islower(test[i]))//소문자이면
			printf("%c", test[i] - 32);
		else
			printf("%c", test[i]);
		i++;
	}

	//+32
	return 0;
}