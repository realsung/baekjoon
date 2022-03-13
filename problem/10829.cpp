#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    vector<ll> v;
    ll n;
    cin >> n;
    while(n){
        v.push_back(n % 2);
        n /= 2;
    }
    reverse(v.begin(), v.end());
    for(auto i: v){
        cout << i;
    }
}