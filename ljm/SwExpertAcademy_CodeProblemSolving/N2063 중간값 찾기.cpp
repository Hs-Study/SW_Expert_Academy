#include <cstdio>
#include <stdlib.h>
int bubble_half_sort(int list[], int n) {
	int temp;
	for (int i = n - 1; i > n/2-1; i--) 
		for (int j = 0; j < i; j++)
			if (list[j] > list[j + 1]){
				temp = list[j]; list[j] = list[j + 1]; list[j + 1] = temp;
			}
	return list[n/2];	//[T(199)/2+1](100)번째 숫자니까 index = n/2(99).
}
int main(void) {
	int T, temp;
	scanf("%d", &T);
	int *list; 
	list = (int *)malloc(sizeof(int)*T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &temp);
		list[i] = temp;
	}
	printf("%d", bubble_half_sort(list, T));
	return 0;
}