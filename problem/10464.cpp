#include <iostream>
using namespace std;

int main(){
    unsigned long T,S,F;
    cin >> T;
    while(T--){
        cin >> S >> F;
        for(int i=S+1; i<=F; i++)
            S^=i;
        cout << S << "\n";
    }
}