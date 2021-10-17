#include <iostream>
#include <queue>

using namespace std;

queue<int>q;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N, t;
    cin >> N;
    for(int i=1; i<=N; i++) q.push(i);
    while(q.size() != 1){
        q.pop();
        t = q.front();
        q.pop();
        q.push(t);
    }
    cout << q.front();   
}
