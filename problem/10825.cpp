#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct{
    int kor;
    int eng;
    int math;
    string name;
}Sub;

bool comp(const Sub &a, const Sub &b){
    if(a.kor != b.kor) return a.kor > b.kor; // 내림차순
    if(a.eng != b.eng) return a.eng < b.eng; // 오름차순
    if(a.math != b.math) return a.math > b.math; // 내림차순
    return a.name < b.name; // 오름차순
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N, i;
    cin >> N;
    vector<Sub> v(N);
    for(auto &i : v)
        cin >> i.name >> i.kor >> i.eng >> i.math;
    sort(v.begin(),v.end(),comp);
    for(auto &i : v)
        cout << i.name << "\n";
}