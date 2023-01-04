#include <bits/stdc++.h>

using namespace std;

int main() {
	int count[123];
	
	for (int i = 0; i <= 123; i ++) {
		count[i] = 0;
	}
	
	string line;
	getline(cin, line);
	
	for (int i = 0; i < line.size(); i ++) {	
		count[int(line[i])] ++;
	}	
	
	for (int i = 97; i <= 122; i ++) {
		if (count[i] == 1) {
			cout << char(i) << endl;
			return 0;
		}
	}
	
	cout << "no" << endl;
}
