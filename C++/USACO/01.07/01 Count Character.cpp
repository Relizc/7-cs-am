#include <bits/stdc++.h>

using namespace std;

string str;
int ans = 0;

int main() {
	
	std::getline(cin, str);
	
	for (int i = 0; i < str.size(); i ++) {
		if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') {
			
			ans += 1;
		}
	}
	
	cout << ans << endl;
}
