#include <iostream>

using namespace std;
int main(){
    int n,m,ma=-1000000,mi=1000000;
    cin >> n;
    while(n--){
        cin >> m;
        ma = max(m,ma);
        mi = min(m,mi);
    }
    cout << mi << " " << ma;
}