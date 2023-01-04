#include <bits/stdc++.h>
using namespace std;

struct student {
	long id;
	double score;
};

bool cmp(const student &a, const student &b) {
	return a.score > b.score;	
};

student stds[101];

int main() {
	int n, k;
	cin >> n >> k;
	
	for (int i = 0; i < n; i ++) {
		long id;
		double score;
		cin >> id >> score;
		stds[i] = {id, score};
	}
	
	sort(stds, stds + n, cmp);
	
	cout << stds[k - 1].id << " " << stds[k - 1].score << endl;
	
	
}

