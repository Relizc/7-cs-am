#include <bits/stdc++.h>

using namespace std;

int win[101];

int main() {
	for (int i = 0; i < 102; i ++) {
		win[i] = 0;
	}
	
	int rounds;
	cin >> rounds;
	
	for (int i = 0; i < rounds; i ++) {
		string option1, option2;
		
		cin >> option1;
		cin >> option2;
		
		if (option1 == "Rock" && option2 == "Paper") {
			win[i] = 2;
		} else if (option1 == "Rock" && option2 == "Scissors") {
			win[i] = 1;
		} else if (option1 == "Paper" && option2 == "Rock") {
			win[i] = 1;
		} else if (option1 == "Paper" && option2 == "Scissors") {
			win[i] = 2;
		} else if (option1 == "Scissors" && option2 == "Paper") {
			win[i] = 1;
		} else if (option1 == "Scissors" && option2 == "Rock") {
			win[i] = 2;
		}
	}
	
	for (int i = 0; i < rounds; i ++) {
		if (win[i] == 0) {
			cout << "Tie" << endl;
		} else if (win[i] == 1) {
			cout << "Player1" << endl;
		} else if (win[i] == 2) {
			cout << "Player2" << endl;
		}
	}
}
