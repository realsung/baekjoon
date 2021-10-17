#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
#define X first
#define Y second
using namespace std;

string board[101];
int chk[101][101];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,i,j,nx,ny;
    queue<pair<int,int>>Q;
    cin >> n >> m;
    for(i=0; i<n; i++)
        cin >> board[i];
    fill(&chk[0][0],&chk[n-1][m],-1);
    Q.push({0,0});
    chk[0][0] = 0;
    while(!Q.empty()){
        pair<int,int>cur = Q.front(); Q.pop();
        for(i=0; i<4; i++){
            nx = cur.X + dx[i];
            ny = cur.Y + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(chk[nx][ny] != -1 || board[nx][ny] == '0') continue;
            chk[nx][ny] = chk[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }
    cout << chk[n-1][m-1] + 1;
}
