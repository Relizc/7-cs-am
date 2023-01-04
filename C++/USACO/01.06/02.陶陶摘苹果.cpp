#include <bits/stdc++.h>

using namespace std;

int main() {
    int apples[11];
    for (int i = 0; i < 10; i ++) {
    	int height;
    	cin >> height;
    	apples[i] = height;
	}
	
	int h;
	cin >> h;
	
	int reachable = 0;
	for (int i = 0; i < 10; i ++) {
		if ((h + 30) >= apples[i])
		reachable ++;
	}
	
	cout << reachable << endl;
}