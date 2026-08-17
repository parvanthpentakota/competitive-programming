#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    int current = 0;
    int maximum = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current -= a;
        current += b;

        if (current > maximum) {
            maximum = current;
        }
    }

    cout << maximum << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}