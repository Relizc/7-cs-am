#include <bits/stdc++.h>
using namespace std;

int numbers[501];

bool cmp(const int &a, const int &b) {
	return a > b;	
}

int main() {
	int n;

	cin >> n;
	
	int odds = 0;
	
	for (int i = 0; i < n; i ++) {
		int j;
		cin >> j;
		if (j % 2 == 1) {
			numbers[odds] = j;
			odds ++;
		}
	}
	
	sort(numbers, numbers + (odds + 1));
	
	for (int i = 1; i <= odds; i ++) {
		cout << numbers[i];
		if (i < odds) {
			cout << ",";
		}
	}
}

