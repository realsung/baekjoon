#include <iostream>
#include <vector>

using namespace std;

int sieve(int n, int k){
    vector<int> primes;
    vector<bool> state(n+1, true);
    // false => prime
    int res;
    state[1] = false;
    for(int i=2; i<=n; i++){
        if(state[i] == false) continue;
        for(int j=i; j<=n; j+=i){ // multiple => not prime
            if(state[j] == false) continue;
            state[j] = false;
            k--;
            if(k == 0){
                res = j;
                break;
            }
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k;
    cin >> n >> k;
    cout << sieve(n, k);
}