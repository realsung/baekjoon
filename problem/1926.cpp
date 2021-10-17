#include <iostream>
#include <utility>
#include <queue>
#define X first
#define Y second

using namespace std;

int table[501][501];
bool chk[501][501];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,i,j,k,cnt=0,area,max=0,nx,ny;
    cin >> n >> m;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin >> table[i][j];
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(!table[i][j] || chk[i][j]) continue;
            cnt++;
            queue<pair<int,int>>Q;
            chk[i][j] = 1;
            Q.push({i,j});
            area = 0;
            while(!Q.empty()){
                area++;
                pair<int,int>cur = Q.front(); Q.pop();
                // cout << "(" << cur.X << "," << cur.Y << ")" << "\n";
                for(k=0; k<4; k++){
                    nx = cur.X + dx[k];
                    ny = cur.Y + dy[k];
                    if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                    if(chk[nx][ny] || table[nx][ny] == 0) continue;
                    Q.push({nx,ny});
                    chk[nx][ny] = 1;
                }
            }
            if(area > max) max = area;
        }
    }
    cout << cnt << "\n";
    cout << max << "\n";
}