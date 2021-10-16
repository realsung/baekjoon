#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N, i, t, M;
    vector<int> v;
    cin >> N;
    for(i=0; i<N; i++){
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    cin >> M;
    int left=0, right=v[N-1], mid, sum, res;
    while(left <= right){
        sum = 0;
        mid = (left + right) / 2;
        for(i=0; i<N; i++)
            sum += min(v[i],mid);
        if(M >= sum){
            res = mid;
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    cout << res;
    
}