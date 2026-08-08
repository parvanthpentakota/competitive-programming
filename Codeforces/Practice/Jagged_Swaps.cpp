#include<bits/stdc++.h>
using namespace std;

void solution() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int first;
        cin >> first;

        for (int i = 2; i <= n; i++) {
            int x;
            cin >> x;
        }

        if (first == 1)
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