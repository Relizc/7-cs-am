#include <bits/stdc++.h>
using namespace std;

string words[101];

bool cmp(const string &a, const string &b) {
	return a > b;
}

int main() {
	string s;
	int j = 0;
	while (cin >> s) {
		words[j] = s;
		j ++;
	}
	
	sort(words, words + j);
	
	string last = "";
	
	for (int i = 0; i < j; i ++) {
		if (last != words[i]) {
			cout << words[i] << endl;
			last = words[i];
		}
	}
}

