#include <iostream>

using namespace std;
int coin[] = {5,2};

int main(){
    int N, cnt=0;
    cin >> N;
    for(int i=0; i<2; i++){
        cout << N << "\n";
        cnt += N/coin[i];
        N%=coin[i];
    }
    if(N) cout << cnt;
    else cout << "-1";
}