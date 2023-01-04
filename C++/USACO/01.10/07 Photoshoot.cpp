#include <bits/stdc++.h>
using namespace std;

double boy[41];
double girl[41];

bool r(const double &a, const double &b) {
	return a > b;
}

int main() {
	int n;
	cin >> n;
	
	int b = 0, g = 0;
	
	for (int i = 0; i < n; i ++) {
		string gender;
		double height;
		cin >> gender >> height;
		
		if (gender == "male") {
			boy[b] = height;
			b ++;
		} else {
			girl[g] = height;
			g ++;
		}
	}
	
	sort(boy, boy + b);
	sort(girl, girl + g, r);
	
	for (int i = 0; i < b; i ++) {
		cout << fixed << setprecision(2) << boy[i] << " ";
	}
	
	for (int i = 0; i < g; i ++) {
		cout << fixed << setprecision(2) << girl[i] << " ";
	}
}


