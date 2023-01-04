#include <bits/stdc++.h>
using namespace std;

int main() {
	string isbn;
	getline(cin, isbn);
	
	int total = 0;
	int numcount = 1;
	
	for (int i = 0; i < 11; i ++) {
		int realnum = isbn[i] - 48;
		if (realnum < 10 && realnum >= 0) {
			total += numcount * realnum;
			numcount ++;
		}
	}
	
	char identifier;
	
	if ((total % 11) == 10) {
		identifier = 'X';
	} else {
		identifier = char((total % 11) + 48);
	}
	
	if (isbn[12] == identifier) {
		cout << "Right" << endl;
	} else {
		cout << isbn.substr(0, 12) + identifier;
	}
}

