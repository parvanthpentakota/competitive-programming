#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for (int time = 0; time < t; time++) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}