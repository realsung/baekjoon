#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#define X first
#define Y second
using namespace std;

bool chk[51][51];
bool vis[51][51];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int m,n,k;

void bfs(int x,int y){
    queue<pair<int,int>> Q;
    int g, nx, ny;
    vis[x][y] = 1;
    Q.push({x,y});
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(g=0; g<4; g++){
            nx = cur.X + dx[g];
            ny = cur.Y + dy[g];
            if(nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
            if(vis[nx][ny] == 1 || chk[nx][ny] == 0) continue;
            vis[nx][ny] = 1;
            Q.push({nx,ny});
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, j, t, kx, ky, nx, ny, v, b;
    int cnt = 0; // 인접한거 개수
    cin >> t;
    for(i=0; i<t; i++){
        cnt = 0;
        memset(chk, 0, sizeof(chk));
        memset(vis, 0, sizeof(vis));
        cin >> m >> n >> k; // 가로 세로 개수
        for(j=0; j<k; j++){
            cin >> kx >> ky;
            chk[kx][ky] = 1;
        }
        for(v=0; v<m; v++){
            for(b=0; b<n; b++){
                if(vis[v][b] == 1 || chk[v][b] == 0) continue; // 방문했거나 배추가 안심어져있거나
                bfs(v,b);
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}