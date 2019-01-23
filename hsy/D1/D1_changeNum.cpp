#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char alpa[200];
	cin>>alpa;

	for (int i = 0; i < strlen(alpa); i++) {
		cout<< alpa[i] - 64<<" ";
	}

	return 0;
}