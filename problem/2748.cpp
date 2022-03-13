#include <iostream>

using namespace std;
using ll = long long;
ll dp[1001];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    dp[0] = 0; dp[1] = 1;
    int n;
    cin >> n;
    for(int i=2; i<=100; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n];
}