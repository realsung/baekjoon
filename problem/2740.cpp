#include <iostream>

using namespace std;

int A[101][101], B[101][101], C[101][101];

int main(){
    int n,m,k,i,j,t;
    cin >> n >> m;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin >> A[i][j];
    cin >> m >> k;
    for(i=0; i<m; i++)
        for(j=0; j<k; j++)
            cin >> B[i][j];
    for(i=0; i<n; i++){
        for(j=0; j<k; j++){
            for(t=0; t<m; t++){
                C[i][j] += A[i][t] * B[t][j];
            }
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
}