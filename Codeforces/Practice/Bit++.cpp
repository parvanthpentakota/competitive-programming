#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s == "++X" || s == "X++") {
            x++;
        } else {
            x--;
        }
    }

    cout << x;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}