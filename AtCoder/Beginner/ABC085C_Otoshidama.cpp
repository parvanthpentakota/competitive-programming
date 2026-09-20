#include<bits/stdc++.h>
using namespace std;

void solution(){
    int N, Y;
    cin >> N >> Y;

    for(int x = 0; x <= N; x++){
        for(int y = 0; y <= N - x; y++){
            int z = N - x - y;

            int total = 10000 * x + 5000 * y + 1000 * z;

            if(total == Y){
                cout << x << " " << y << " " << z << '\n';
                return;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}