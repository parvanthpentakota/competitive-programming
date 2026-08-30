#include<bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;

    int count = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
        else {
            count = 1;
        }

        if (count >= 7) {
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