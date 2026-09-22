#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n, k, l, c, d, p, nl, np, s, ns;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np >> s >> ns;

    int drink = (k * l) / nl;
    int lime = (c * d) / 1;
    int salt = p / np;

    int total = min({drink, lime, salt});

    cout << total / n << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}