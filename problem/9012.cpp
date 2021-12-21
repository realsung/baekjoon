#include <iostream>
#include <stack>

using namespace std;

bool check(string str){
    stack<char>s;
    for(int j=0; j<str.length(); j++){
        if(str[j] == '(') s.push('(');
        if(str[j] == ')'){
            if(!s.empty()){
                s.pop();
            }else{
                return false;
            }
        }
    }
    
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    string str;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> str;
        if(check(str)){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}