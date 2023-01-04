#include <bits/stdc++.h>

using namespace std;

int main() {
	string query;
	getline(cin, query);
	
	bool space = false;
	
	string result = "";
	for (int i = 0; i < query.size(); i ++) {
		if (query[i] != ' ') {
			space = false;
			result += query[i];
		} else {
			if (!space) {
				result += query[i];
			}
			space = true;
		}
	}
	
	cout << result << endl;
}

