#include <bits/stdc++.h>

using namespace std;

int main() {
	float value;
	cin >> value;
	
	string dna1;
	getline(cin, dna1);
	
	string dna2;
	getline(cin, dna2);
	
	int same = 0;
	
	for (int i = 0; i < dna1.size(); i ++) {
		if (dna1[i] == dna2[i]) {
			same ++;
		}
	}
	
	if ((same * 1.0) / dna1.size() >= value) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
	
}
