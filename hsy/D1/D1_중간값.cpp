#include <iostream>
using namespace std;

void insertion_sort(int *list, int n){
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--)
			list[j + 1] = list[j];
		list[j + 1] = key;
	}
}

int main(void) {
	int cnt = 0;
	int middle=0;
	cin >> cnt;

	int num[200];

	for (int i = 0; i < cnt; i++) {
		cin >> num[i];
	}

	insertion_sort(num, cnt);

	middle = num[(cnt / 2)];

	printf("%d ", middle);
}