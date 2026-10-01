#include<bits/stdc++.h>
using namespace std;

void solution(){
    int t;
    cin >> t;

    string pi = "314159265358979323846264338327";

    while(t--){
        string s;
        cin >> s;

        int count = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == pi[i]){
                count++;
            }
            else{
                break;
            }
        }

        cout << count << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}