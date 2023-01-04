#include <bits/stdc++.h>

using namespace std;

struct animal {
	int n;
	string traits[101];
};

animal animals[101];

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i ++) {
		
		string x;
		int k;
		cin >> x >> k;
		
		string traits[101];
		
		for (int j = 0; j < k; j ++) {
			string c;
			cin >> c;
			traits[j] = c;
		}
		
		animals[i] = {1, traits};
	}
}

