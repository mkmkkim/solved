#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int d, w, h;
	cin >> d >> h >> w;
	if (w < 2 || w>100 || h < 1 || h > 99 || 5 > d || d > 1000) {
		return 0;
	}
	if (h < w) {
		double a = pow(d, 2) / (pow(h, 2) + pow(w, 2));
		cout << int(sqrt(a) * h) << " ";
		cout << int(sqrt(a) * w) << " ";
	}
}
