#include <bits/stdc++.h>

using namespace std;

bool contains(string strarray, string item) {
	for (int i = 0; i < strarray.size(); i ++) {
		if (strarray[i] == item) {
			return true;
		}
	}
	return false;
}

int getlen(string s, int i, int j) {
	int len = j - i;
	string sub = s.substr(i, len + 1);
	
	string occur[101];
	
	for (int k = 0; k < s.size() - len; k ++) {
		cout << s.substr(k, len + 1) << endl;
	}
	
}

int main() {
	
}
