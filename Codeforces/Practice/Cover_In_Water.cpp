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

        int dots = 0;
        int cnt = 0;
        bool ok = false;

        for (char c : s) {
            if (c == '.') {
                dots++;
                cnt++;
                if (cnt >= 3)
                    ok = true;
            } else {
                cnt = 0;
            }
        }

        if (ok)
            cout << 2 << '\n';
        else
            cout << dots << '\n';
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}