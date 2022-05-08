#include<iostream>
#include<algorithm>
using namespace std;
int n;
int rgb[1000][3];

int Color() {
	int mini;
	for (int i = 1; i < n; i++) {
		rgb[i][0] = min(rgb[i - 1][1], rgb[i - 1][2]) + rgb[i][0];
		rgb[i][1] = min(rgb[i - 1][0], rgb[i - 1][2]) + rgb[i][1];
		rgb[i][2] = min(rgb[i - 1][1], rgb[i - 1][0]) + rgb[i][2];
	}
	mini = min(min(rgb[n - 1][0], rgb[n - 1][1]), rgb[n - 1][2]);
	return mini;
}
int main() {
	cin >> n;	
	for (int i = 0; i < n; i++) {
		for(int j=0;j<3;j++) cin >> rgb[i][j];
	}
	cout << Color();
}
