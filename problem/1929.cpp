#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve(int m, int n){
    vector<int> primes;
    vector<bool> state(n+1, true);
    // false => prime
    state[1] = false;
    for(int i=2; i*i<=n; i++){
        if(state[i] == false) continue;
        for(int j=i*i; j<=n; j+=i){ // multiple => not prime
            state[j] = false;
        }
    }
    for(int i=m; i<=n; i++)
        if(state[i]) primes.push_back(i);
    
    return primes;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int m, n;
    cin >> m >> n;
    vector<int> primes = sieve(m, n);
    for(auto i: primes){
        cout << i << "\n";
    }
}