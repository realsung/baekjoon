#include <iostream>

using namespace std;

int dp[20];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int T, n, s;
    dp[0] = 1; dp[1] = 2; dp[2] = 4; 
    for(int i=3; i<=11; i++){
        s = 0;
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        // cout << i << " : " << dp[i] << "\n";
    }
    cin >> T;
    while(T--){
        cin >> n;
        cout << dp[n-1] << "\n";
    }
}