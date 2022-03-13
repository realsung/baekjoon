#include <iostream>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    if(a == 0) return b;
    return gcd(b%a, a);
}

// a * b = gcd(a,b) * lcm(a,b) 
// lcm(a,b) = a * b / gcd(a,b)

ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

int main(){
    ll a,b;
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b;
    cout << lcm(a,b);
}