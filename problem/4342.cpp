#include <iostream>

using namespace std;

bool chk(int a, int b){
    if(a % b == 0) return 1;
    if(a / b > 1) return 1;
    return !chk(b, a - b);
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b;
    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        if(b > a) swap(&a, &b);
        if(!chk(a, b))
            cout << "B wins" << "\n";
        else
            cout << "A wins" << "\n";
    }
}