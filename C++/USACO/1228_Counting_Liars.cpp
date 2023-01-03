#include <bits/stdc++.h>

using namespace std;

char types[1001];
int coords[1001];

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i ++) {
		char t;
		int coord;
		
		cin >> t >> coord;
		
		types[i] = t;
		coords[i] = coord;
	}
	
	int lies = INT_MAX;
	
	for (int i = 0; i < n; i ++) {
		int truth = coords[i];
		int thislies = 0;
		
		for (int j = 0; j < n; j ++) {
			if (types[j] == 'L' && coords[j] < truth) thislies ++;
			else if (types[j] == 'G' && coords[j] > truth) thislies ++;
		}
		
		lies = min(lies, thislies);
	}
	
	cout << lies << endl;
	
	
}
