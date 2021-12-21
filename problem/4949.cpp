#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true){
        string str;
        stack<char> s;
        bool chk = true;
        getline(cin, str);
        if(str == ".") break;
        for(auto c: str){
            if(c == '(' || c == '['){
                s.push(c);
            }
            else if(c == ')'){
                if(s.empty() || s.top() != '('){
                    chk = false;
                    break;
                }
                s.pop();
            }
            else if(c == ']'){
                if(s.empty() || s.top() != '['){
                    chk = false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty()) chk = false;
        if(chk) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}