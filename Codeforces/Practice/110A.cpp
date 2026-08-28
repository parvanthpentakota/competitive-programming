#include<bits/stdc++.h>
using namespace std;

void solution() {
    long long n;
    cin >> n;

    int count = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit == 4 || digit == 7) {
            count++;
        }

        n = n / 10;
    }

    if (count == 4 || count == 7) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}