#include <iostream>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll N, k;
    cin >> N >> k;
    ll left=1, right=k, mid, res, sum, i;
    while(left <= right){
        sum = 0;
        mid = (left + right) / 2;
        for(i=1; i<=N; i++)
            sum += min(N, mid / i);
        if(sum >= k)
            res = mid, right = mid - 1;
        else
            left = mid + 1;
    }
    cout << res;
}