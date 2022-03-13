#include <iostream>

using ll = long long;
using namespace std;

ll f(ll a, ll b, ll c){
    if(b == 1) return a % c;
    ll tmp = f(a, b/2, c);
    if(b % 2){
        return ((tmp * tmp) % c * a) % c;
    }else{
        return ((tmp * tmp) % c);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c;
    cin >> a >> b >> c;
    cout << f(a,b,c);
}