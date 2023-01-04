#include <bits/stdc++.h>

using namespace std;

int matrix[5][5];

int main() {
	for (int i = 0; i < 5; i ++) {
		for (int j = 0; j < 5; j ++) {
			cin >> matrix[j][i];
		}
	}
	
	int rowLargest[5];
	
	for (int x = 0; x < 5; x ++) {
		int thisRowLargest = -1;
		for (int y = 0; y < 5; y ++) {
			thisRowLargest = max(thisRowLargest, matrix[y][x]);
		}
		rowLargest[x] = thisRowLargest;
	}
	
	int columnLargest = -1;
	int rowCoords	 = 0;
	
	for (int i = 0; i < 5; i ++) {	
		if (rowLargest[i] > columnLargest) {
			columnLargest = rowLargest[i];
			columnCoords = i;
		}
	}
}
