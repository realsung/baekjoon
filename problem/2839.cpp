#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, cnt = 0;
    cin >> n;
    while(n){
        if(n / 5){
            cnt += n / 5;
            n -= (n/5) * 5;
        }
        if(n / 3){
            cnt += n / 3;
            n -= (n/3) * 3;
        }else{
            cout << "-1";
            return 0;
        }
    }
    cout << cnt;
}