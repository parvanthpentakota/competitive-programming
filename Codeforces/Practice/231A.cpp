#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2) {
            answer++;
        }
    }

    cout << answer << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}