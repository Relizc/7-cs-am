#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i ++) {
    	int j;
    	cin >> j;
    	x[i] = j;
	}
	
	int m;
	int count = 0;
	cin >> m;
	for (int i = 0; i < n; i ++) {
    	if (x[i] == m) {
    		count ++;
		}
	}
	cout << count << endl;
}