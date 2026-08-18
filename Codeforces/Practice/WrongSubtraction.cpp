#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) {
            n = n / 10;
        }
        else {
            n = n - 1;
        }
    }

    cout << n << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}