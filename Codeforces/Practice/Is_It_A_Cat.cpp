#include<bits/stdc++.h>
using namespace std;

void solution() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Convert to lowercase
        for (char &c : s)
            c = tolower(c);

        string t;
        t += s[0];

        // Remove consecutive duplicates
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                t += s[i];
        }

        if (t == "meow")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}