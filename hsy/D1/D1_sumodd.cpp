#include <iostream>
using namespace std;

int main() {
	int test[10][10];
	int num;
	int sum[10];
	cin >> num;


	for (int i = 0; i < num; i++) {
		sum[i] = 0;
		for (int j = 0; j < 10; j++) {
			cin >> test[i][j];
			if(test[i][j]%2==1)
				sum[i] += test[i][j];
		}
			
	}

	for (int i = 0; i < num; i++) {
		cout << "#" << i + 1 << " " << sum[i];
		cout << "\n";
	}
}