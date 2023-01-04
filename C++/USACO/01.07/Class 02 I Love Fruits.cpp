#include <bits/stdc++.h>
using namespace std;

string fruits[7] = {"apples", "bananas", "peaches", "cherries", "pears", "oranges", "strawberries"}; 

int main()
{
	//freopen("guess.in", "r", stdin);
	//freopen("guess.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	
	string s;
	while(getline(cin, s)){
		bool hasfruit = false;
		for(int i=0; i<7; i++){
			while (s.find(fruits[i]) != string::npos){
				int pos = s.find(fruits[i]);
				int len = fruits[i].length();
				s.replace(pos, len, "NOI");
				hasfruit = true;
			}
		}
		if(hasfruit){
			cout << s << endl;
		} else {
			cout <<"You must not enjoy fruit."<<endl;
		}
	}
	
	return 0;
}

