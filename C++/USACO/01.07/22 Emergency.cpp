#include <bits/stdc++.h>
using namespace std;

int main() {
	string target;
	cin >> target;
	
	int n;
	cin >> n;
	
	int needToCorrect = 0;
	
	char usernames[10001][51];
	char passwords[10001][51];
	
	for (int i = 0; i < n; i ++) {
		string username, password, email;
		cin >> username >> password >> email;
		
		if (email == target) {
			string after = "";
			for (int j = 0; j < password.size(); j ++) {
				int ascii = int(password[j]);
				if (ascii >= 65 && ascii <= 90) {
					after += char(ascii + 32);
				} else if (ascii >= 97 && ascii <= 122) {
					after += char(ascii - 32);22 Emergency.cpp
				} else {
					after += char(ascii);
				}
			}
			
			for (int j = 0; j < username.size(); j ++) {
				usernames[needToCorrect][j] = username[j];
			}
			
			for (int j = 0; j < after.size(); j ++) {
				passwords[needToCorrect][j] = after[j];
			}
			
			needToCorrect ++;
		}
	}
	
	if (needToCorrect == 0) {
		cout << "empty" << endl;
		return 0;
	}
	
	for (int i = 0; i < needToCorrect; i ++) {
		cout << usernames[i] << " " << passwords[i] << endl;
	}
}

