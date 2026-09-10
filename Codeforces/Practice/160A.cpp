#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    vector<int> coins(n);

    int total = 0;
    for(int i=0;i<n;i++){
        cin >> coins[i];
        total += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int taken = 0;
    int answer = 0;

    for(int i=0;i<n;i++){
        taken += coins[i];
        answer++;

        if(taken > total - taken){
            break;
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