#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, m;
    cin >> l >> m;
    
    int points[l];
    for (int i = 0; i < m; i ++) {
    	int start, end;
    	cin >> start >> end;
    	for (int j = start; j < end; j ++) {
    		points[j] = 1;
		}
	}
	
	int count = 0;
	for (int i = 0; i < l; i ++) {
		if (points[i] == 1) {
			count += 1;
		}
	}
	
	cout << l - count << endl;
}