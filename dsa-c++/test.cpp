#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        bool used[10] = {false};

        for(int i = 0; i < n; i++){
            string s;
            cin >> s;

            for(char c : s){
                used[c - '0'] = true;
            }
        }

        for(int i = 0; i <= 9; i++){
            if(used[i]){
                cout << i << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}
