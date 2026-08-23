#include<bits/stdc++.h>
using namespace std;

void solution() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if (a < b) {
        cout << -1 << '\n';
    }
    else if (a > b) {
        cout << 1 << '\n';
    }
    else {
        cout << 0 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}