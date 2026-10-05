#include<bits/stdc++.h>
using namespace std;

void solution(){
    long long n, h, k;
    cin >> n >> h >> k;

    long long current = 0;
    long long ans = 0;

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;

        if(current + x <= h){
            current += x;
        }
        else{
            ans++;
            current = x;
        }

        ans += current / k;
        current %= k;
    }

    if(current > 0){
        ans++;
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}