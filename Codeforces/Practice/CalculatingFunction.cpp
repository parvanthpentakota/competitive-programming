#include<bits/stdc++.h>
using namespace std;

void solution() {
    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << '\n';
    } else {
        cout << -(n + 1) / 2 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}