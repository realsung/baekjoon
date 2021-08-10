#include <iostream>

using namespace std;
long long DP[51];

int main() {
	int N;
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> N;
	DP[0] = 1; DP[1] = 1; DP[2] = 2;
	for (int i = 2; i <= N; i++) {
		DP[i] = DP[i - 2] + DP[i - 1];
	}
	cout << DP[N-1] << endl;
}
