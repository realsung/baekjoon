#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int m, n, sum = 0;
    vector<int> v;
    bool c;
    cin >> m >> n;
    if(m == 1) m = 2;
    for(int i=m; i<=n; i++){
        c = 1;
        for(int j=2; j<i; j++){
            if(i % j == 0){
                c = 0;
                break;
            }
        }
        if(c == 1){
            v.push_back(i);
            sum += i;
        }
    }
    if(v.size() != 0)
        cout << sum << "\n" << v[0];
    else
        cout << "-1";
}