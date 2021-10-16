#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool comp(string a, string b){
    if(a.length() != b.length()) return a.length() < b.length();
    return a < b;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N;
    cin >> N;
    vector<string>p(N);
    for(auto &i : p)
        cin >> i;
    sort(p.begin(),p.end(),comp);
    p.erase(unique(p.begin(),p.end()),p.end());
    for(const auto &i : p)
        cout << i << "\n";
}
