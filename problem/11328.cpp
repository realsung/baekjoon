#include <iostream>
#include <cstring>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N;
    string a,b;
    cin >> N;
    char alpha[26] = {0,};
    bool c;
    while(N--){
        memset(alpha,0,sizeof(alpha));
        c = true;
        cin >> a >> b;
        for(auto i : a) alpha[i - 'a']++;
        for(auto i : b) alpha[i - 'a']--;
        for(auto i : alpha) if(i != 0) c = false;
        if(c == true)
            cout << "Possible" << "\n";
        else
            cout << "Impossible" << "\n";
    }
}