#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    string team1, team2;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++){
        string team;
        cin >> team;

        if(i == 0){
            team1 = team;
            count1++;
        }
        else if(team == team1){
            count1++;
        }
        else{
            team2 = team;
            count2++;
        }
    }

    if(count1 > count2){
        cout << team1 << '\n';
    }
    else{
        cout << team2 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}