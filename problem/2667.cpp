#include <iostream>
#include <utility>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#define X first
#define Y second

using namespace std;

string table[26];
bool chk[26][26];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main(){
    int N,i,j,k,cnt=0,nx,ny,area;
    vector<int>v;
    cin >> N;
    for(i=0; i<N; i++)
        cin >> table[i];
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(table[i][j] == '0' || chk[i][j]) continue;
            cnt++;
            queue<pair<int,int>>Q;
            Q.push({i,j});
            chk[i][j] = 1;
            area = 0;
            while(!Q.empty()){
                area++;
                auto cur = Q.front(); Q.pop();
                for(k=0; k<4; k++){
                    nx = cur.X + dx[k];
                    ny = cur.Y + dy[k];
                    if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                    if(chk[nx][ny] || table[nx][ny] == '0') continue;
                    chk[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }
            v.push_back(area);
        }
    }
    cout << cnt << "\n";
    sort(v.begin(),v.end());
    for(i=0; i<v.size(); i++)
        cout << v[i] << "\n";
}