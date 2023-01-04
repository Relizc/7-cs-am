#include <iostream>
using namespace std;

double triangeArea(double base, double height) {
	return (base * height) / 2;
}

int main() {
	int base = 10;
	int height = 10;
	cout << triangeArea(base, height) << endl;
}
