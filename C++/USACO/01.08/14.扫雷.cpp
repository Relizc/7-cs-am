#include <bits/stdc++.h>
#define ll long long
using namespace std;

char mine[101][101]; // global variable
int cnt[101][101];

const int DIRECTION[8][2] = {{-1, -1},{-1, 0}, {-1, 1},
	{0, -1},          {0, 1},
	{1, -1}, {1, 0}, {1, 1}};

int main() {
	//    freopen("guess.in", "r", stdin);
	//	  freopen("guess.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= m; c++) {
			cin>> mine[r][c];
		}
	}
	
	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= m; c++) {
			if(mine[r][c] == '?') {
				for(int i=0; i<8; i++){
					int nr = r + DIRECTION[i][0];
					int nc = c + DIRECTION[i][1];
					if(mine[nr][nc] == '*'){
						cnt[r][c]++;
					}
				}
			}
		}
	}
	
	for (int x = 1; x <= n; x ++) {
		for (int y = 1; y <= m; y ++) {
			if (mine[x][y] == '*') {
				cout << '*';
			} else {
				cout << cnt[x][y];
			}
		}
		cout << endl;
	}
	
	return 0;
}

