#include <bits/stdc++.h>
using namespace std;

int main() {
	string enter, s, s1, s2;
	cin >> enter;
	
	int i1 = enter.find(",");
	int i2 = enter.rfind(",");
	
	s = enter.substr(0, i1);
	s1 = enter.substr(i1 + 1, i2 - i1 - 1);
	s2 = enter.substr(i2 + 1);
	
	int s1i = s.find(s1);
	int s2i = s.rfind(s2);
	
	int range = (s2i - 1) - (s1i + s1.size()) + 1;
	
	if (range < 0) { 
		range = -1;
	}
	
	cout << range << endl;
}

