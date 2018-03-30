#include <iostream>
#include <algorithm>
using namespace std;

int p[10001], d[10001];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> p[i];
	}

	d[0] = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i ; j++) {
			d[i] = max(d[i], d[i - j] + p[j]);
		}
	}
	cout << d[N];
}