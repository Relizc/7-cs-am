#include <bits/stdc++.h>
using namespace std;

struct reg {
	int id;
	int score;
};

reg ppl[5001];
reg ok[5001];

bool cmp(const reg &a, const reg &b) {
	if (a.score == b.score) {
		return a.id < b.id;
	}
	return a.score > b.score;	
}

int main() {
	int n, m;
	
	cin >> n >> m;
	
	for (int i = 0; i < n; i ++) {
		int id, score;
		cin >> id >> score;
		ppl[i] = {id, score};
	}
	
	sort(ppl, ppl + n, cmp);
	
	int accept = int(floor(m * 1.5));
	int acceptScore = ppl[accept - 1].score;
	
	int yes = 0;
	
	for (int i = 0; i < n; i ++) {
		if (ppl[i].score < acceptScore) break;
		ok[i] = ppl[i];
		yes ++;
	}
	
	cout << acceptScore << " " << yes << endl;
	
	for (int i = 0; i < yes; i ++) {
		cout << ok[i].id << " " << ok[i].score << endl;
	}
}

