// g++ -o 10610 10610.cpp --std=c++17
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string str;
    vector<int> v;
    int sum = 0;
    cin >> str;
    for(int i=0; i<str.length(); i++){
        v.push_back(str[i]-'0');
        sum += str[i]-'0';
    }
    sort(v.begin(), v.end(), greater<int>());
    if(v[v.size()-1] != 0 || sum % 3 != 0){
        cout << -1 << endl;
        return 0;
    }else{
        for(int i=0; i<v.size(); i++){
            cout << v[i];
        }
        cout << "\n";
    }
}

/*
30의 배수를 구하려면 3의 배수인지 확인하고, 마지막이 0인지 확인하면 된다.
여기서는 입력 받은 각 각의 숫자들 중에 30의 배수가 가장되는 가장 큰 수를 구해야 하므로 정렬함
80875542 입력하면 8 8 7 5 5 4 2 0 이 되고, 30의 배수인지 확인하고, 마지막이 0인지 확인하면 된다.
2931 입력하면 9 3 2 1이 되고, 30의 배수가 아니므로 -1 출력
*/