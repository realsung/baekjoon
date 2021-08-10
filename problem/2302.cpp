// solution 1
#include <iostream>
#include <vector>
using namespace std;

long long dp[41];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, point = 0;
	long long res = 1;
	cin >> N;
	cin >> M;
	
	dp[0] = 1; dp[1] = 1;
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		res *= dp[x - point - 1];
		point = x;
	}
	res *= dp[N - point];
	cout << res << "\n";
}

// solution 2
/*
#include <iostream>
#include <vector>
using namespace std;
// f(1) = 1, f(2) = 2, f(3) = 3, f(4) = 5
int f(int n) {
	if (n == 1) return 1;
	if (n == 0) return 0;
	return f(n-1) + f(n-2);
}

int main() {
	int N, M, tmp, res = 1, cnt;
	vector<int>vip;
	cin >> N;
	cin >> M;
	while (M--) {
		cin >> tmp;
		vip.push_back(tmp);
	}
	for (int j = vip.size()-1; j >= 0; j--) {
		cnt = N - vip[j];
		N = vip[j] - 1;
		res *= f(cnt+1);
	}
	res *= f(N+1);
	cout << res << "\n";
}
*/
