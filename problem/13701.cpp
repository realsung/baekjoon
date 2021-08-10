#include <iostream>
#include <bitset>

using namespace std;

bitset<33554432>bit;

int main() {
	int n;
	bit.reset();
	cin.tie(0);
	ios::sync_with_stdio(0);
	while (cin >> n && n) {
		if (!bit[n]) // overlap check
			cout << n << " ";
		bit[n] = 1; // overlap check
	}
}
