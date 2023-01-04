#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	int j = s.size() - 1;
	
	bool interrup = false;
	
	for (int i = 0; i < s.size(); i ++) {
		if (s[i] != s[j]) {
			interrup = true;
		}
		j -= 1;
	}
	
	if (!interrup) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
}

