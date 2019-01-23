#include <stdio.h>
#include <string.h>
void main() {
	int i = 0;
	char str[201] = "";
	
	scanf("%s", &str);
	for (int i = 0; i < strlen(str); i++) {
		
		printf("%d ", str[i] - 'A' + 1);
	}
}