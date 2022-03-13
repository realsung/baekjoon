#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}

// lcm(a,b) * gcd(a,b) == a*b
int lcm(int a, int b){
    return a / gcd(a,b) * b;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t, n, m, x, y, f, res;
    bool chk;
    cin >> t;
    while(t--){
        chk = false;
        cin >> m >> n >> x >> y;
        f = lcm(m, n);
        if(m == x) x = 0;
        if(n == y) y = 0;
        // cout << "lcm : " << f << "\n";
        for(int i=x; i<=f; i+=m){
            if(i == 0) continue;
            if(i % n == y){
                chk = true;
                res = i;
                break;
            }
        }
        if(chk)
            cout << res << "\n";
        else
            cout << "-1" << "\n";
    }
}