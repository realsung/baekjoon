#include <iostream>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    if(a == 0) return b;
    return gcd(b%a, a);
}

ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    ll a,b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << lcm(a,b) << "\n";
    }
}