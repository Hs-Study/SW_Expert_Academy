#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int test[10][10];
	double average[10];
	int num;
	int sum;
	cin >> num;
	

	for (int i = 0; i < num; i++) {
		sum = 0;
		for (int j = 0; j < 10; j++) {
			cin >> test[i][j];
			sum += test[i][j];
		}
		average[i] = sum / 10.0;
	}

	for (int i = 0; i < num; i++) {
		cout << "#" << i + 1 << " " << round(average[i]);
		cout << "\n";
	}
}