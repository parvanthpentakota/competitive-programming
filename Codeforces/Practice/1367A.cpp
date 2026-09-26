#include<bits/stdc++.h>
using namespace std;

void solution(){
    int t;
    cin >> t;

    while(t--){
        string b;
        cin >> b;

        string a = b.substr(0, 2);

        for(int i = 3; i < b.length(); i += 2){
            a += b[i];
        }

        cout << a << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}