#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }

    cout << count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solution();

    return 0;
}