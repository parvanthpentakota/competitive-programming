#include<bits/stdc++.h>
using namespace std;

void solution() {
    int k, n, w;
    cin >> k >> n >> w;

    int total = 0;

    for (int i = 1; i <= w; i++) {
        total += i * k;
    }

    if (total > n) {
        cout << total - n << '\n';
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