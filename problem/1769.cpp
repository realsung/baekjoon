#include <iostream>
#include <string>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    long long sum = 0;
    int cnt = 0;

    cin >> s;

    if(s.length() == 1){
        if(s == "3" || s == "6" || s == "9"){
            cout << "0" << "\n";
            cout << "YES\n";
        }else{
            cout << "0" << "\n";
            cout << "NO\n";
        }
        return 0;
    }

    do{
        sum = 0;
        for(int i=0; i<s.length(); i++){
            sum += s[i] - '0';
        }
        cnt++;
        s = to_string(sum);
    }while(sum > 9);

    if(sum == 3 || sum == 6 || sum == 9){
        cout << cnt << "\n";
        cout << "YES\n";
    }
    else{
        cout << cnt << "\n";
        cout << "NO\n";
    }
}