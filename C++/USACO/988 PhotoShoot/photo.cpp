#include <bits/stdc++.h>

using namespace std;

int sums[1001];
int placement[1001];

int main() {
	freopen("photo.in", "r", stdin);
	freopen("photo.out", "w", stdout);
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n - 1; i ++) {
		int g;
		cin >> g;
		
		sums[i] = g;
	}
	
	for (int first = 1; first < sums[0]; first ++) {
		placement[0] = first;
		
		for (int i = 1; i < n; i ++) {
			placement[i] = sums[i - 1] - placement[i - 1];
		}
		
		int sorted[1001];
		
		for (int i = 0; i < n; i ++) {
			sorted[i] = placement[i];
		}
		
		sort(sorted, sorted + n);
		
		bool ok = true;
		
		for (int i = 0; i < n; i ++) {
			if (sorted[i] != i + 1) {
				ok = false;
				break;
			}
		}
		
		if (ok) {
			for (int i = 0; i < n; i ++) {
				cout << placement[i];
				if (i != n - 1) {
					cout << " ";
				}
			}
		}
	}
}
