#include<bits/stdc++.h>
using namespace std;

void solution(){
    int c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;

    int pairs24 = min(c2, c4);
    c2 -= pairs24;
    c4 -= pairs24;

    int pairs32 = min(c3, c2);

    int answer = pairs24 * 24 + pairs32 * 32;

    c2 -= pairs32;

    answer += (c2 / 2) * 22;

    cout << answer << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}