#include<bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}