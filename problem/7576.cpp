#include <iostream>
#include <utility>
#include <queue>
#define X first
#define Y second

using namespace std;

int table[1001][1001];
int chk[1001][1001];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, i, j, day=0, nx, ny, flag;
    queue<pair<int,int>>Q;
    cin >> m >> n;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> table[i][j];
            if(table[i][j] == 0){ // 안익은거
                chk[i][j] = -1;
            }
            if(table[i][j] == 1){ // 익은거
                Q.push({i,j}); // 시작점 push
            }
        }
    }
    // 1 = 익은거 -> 1
    // 0 = 안익은거 -> -1
    // -1 = 없는거 -> 0

    while(!Q.empty()){
        pair<int,int>cur = Q.front(); Q.pop();
        flag = 0;
        for(i=0; i<4; i++){
            nx = cur.X + dx[i];
            ny = cur.Y + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue; /// 범위 check
            if(chk[nx][ny] >= 0) continue; // 토마토가 익은 곳이랑 없는 곳은 건너뜀
            chk[nx][ny] = chk[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            // cout << chk[i][j] << " ";
            if(chk[i][j] == -1){
                cout << "-1";
                return 0;
            }
            day = max(day, chk[i][j]);
        }
        // cout << "\n";
    }
    cout << day;
    return 0;
}