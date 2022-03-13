#include <iostream>

using namespace std;

int yen[] = {500,100,50,10,5,1};

int main(){
    int N,cnt=0;
    cin >> N;
    N = 1000 - N;
    for(int i=0; i<6; i++){
        cnt += N/yen[i];
        N%=yen[i];
    }
    cout << cnt;
}
// 999 -> 1
// 499 -> 4
// 99 -> 1
// 49 -> 4
// 9 -> 9

// 620 -> 1
// 120 -> 1
// 20 -> 2