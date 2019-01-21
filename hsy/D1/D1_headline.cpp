#include <iostream>
using namespace std;

int main() {

	char headline[80];
	char HEADLINE[80];

	cin >> headline;

	for (int i = 0; i < 80; i++) {
		HEADLINE[i] = toupper(headline[i]);
	}

	cout << HEADLINE;

	return 0;
}
