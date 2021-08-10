#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main() {
	int tmp_n, flag;
	int arr[11];
	vector<int>v;
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	for (int i = 1; i <= 30000001; i++) {
		tmp_n = i;
		flag = 0;
		memset(arr, 0, sizeof(arr));
		while (tmp_n) {
			if (arr[tmp_n % 10]++) {
				flag = 1;
				break;
			}
			tmp_n /= 10;
		}
		if (!flag)
			v.push_back(i);
	}
	int n;
	while (cin >> n && n) {
		cout << v[n - 1] << "\n";
	}

	return 0;
}
