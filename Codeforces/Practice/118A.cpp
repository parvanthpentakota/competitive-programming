#include<bits/stdc++.h>
using namespace std;

void solution(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        char ch = tolower(s[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u' || ch == 'y'){
            continue;
        }

        cout << "." << ch;
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}