#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k, input, cnt = 0;
    vector<int> coin;
    vector<int>::iterator iter;

    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> input;
        coin.push_back(input);    
    }

    for(int j = coin.size()-1; j >= 0; j--){
        // cout << coin[j] << " : " << k << "\n";
        if(k == 0) break;
        if(k / coin[j] != 0){
            cnt += k / coin[j];
            k %= coin[j];
        }
    }

    // for(iter = coin.end()-1; iter != coin.begin(); iter--){
    //     // cout << *iter << " : " << k << "\n";
    //     // if(k == 0) break;
    //     if(k / (*iter) != 0){
    //         cnt += k / (*iter);
    //         k -= (*iter) * (k / (*iter));
    //     }
    // }
    cout << cnt;
}

/*
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k, input, cnt = 0;
    vector<int> coin;
    vector<int>::iterator iter;

    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> input;
        coin.push_back(input);    
    }

    for(int j = n-1; j >= 0; j--){
        if(k / coin[j] != 0){
            cnt += k / coin[j];
            k %= coin[j];
        }
    }

    cout << cnt;
}
*/