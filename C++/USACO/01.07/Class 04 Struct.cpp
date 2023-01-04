#include <bits/stdc++.h>

using namespace std;

struct student {
	int id;
	int sum, chinese, math, english;
};

bool compare(const student &a, const student &b) {
	if (a.sum == b.sum) {
		if (a.chinese == b.chinese) {
			if (a.math == b.math) {
				if (a.english == b.english) {
					return a.id > b.id;
				}
				return a.english > b.english;
			}
			return a.math > b.math;
		}
		return a.chinese > b.chinese;
	}
	return a.sum > b.sum;
}

student sd[301];

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i ++) {
		int chinese, math, english;
		cin >> chinese >> math >> english;
		
		sd[i] = {i, chinese + math + english, chinese, math, english};
	}
	
	sort(sd, sd + n, compare);
	
	for (int j = 0; j < 5; j ++) {
		cout << sd[j].id + 1 << " " << sd[j].sum << endl;
	}
}
