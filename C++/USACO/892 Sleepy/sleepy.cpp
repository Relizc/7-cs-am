#include <bits/stdc++.h>

using namespace std;

int cows[101];

int main() {
	freopen("sleepy.in", "r", stdin);
	freopen("sleepy.out", "w", stdout);
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i ++) {
		int g;
		cin >> g;
		cows[i] = g;
	}
	
	int last = cows[n - 1];
	int ans = 0;
	bool ordered = true;
	
	for (int i = n - 2; i >= 0; i --) {
		if (cows[i] < last) {
			last = cows[i];
		} else {
			ans = i;
			ordered = false;
			break;
		}
	}
	
	if (!ordered) {
		cout << ans + 1<< endl;	
	} else {
		cout << 0 << endl;
	}
	
	
}
