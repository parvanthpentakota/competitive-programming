#include<bits/stdc++.h>
using namespace std;

void solution() {
    int n, m;
    cin >> n >> m;

    long long answer = 0;
    int current = 1;

    for (int i = 0; i < m; i++) {
        int destination;
        cin >> destination;

        if (destination >= current) {
            answer += destination - current;
        }
        else {
            answer += n - current + destination;
        }

        current = destination;
    }

    cout << answer << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}