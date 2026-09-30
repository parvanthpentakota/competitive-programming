#include<bits/stdc++.h>
using namespace std;

void solution(){
    int t;
    cin >> t;

    while(t--){
        char c;
        cin >> c;

        string s = "codeforces";

        bool found = false;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == c){
                found = true;
                break;
            }
        }

        if(found){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}