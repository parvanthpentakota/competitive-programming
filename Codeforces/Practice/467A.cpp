#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    int answer = 0;

    for(int i = 0; i < n; i++){
        int p, q;
        cin >> p >> q;

        if(q - p >= 2){
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