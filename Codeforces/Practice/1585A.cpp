#include<bits/stdc++.h>
using namespace std;

void solution(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int height = 1;
        bool alive = true;

        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                if(i > 0 && a[i - 1] == 0){
                    alive = false;
                    break;
                }
            }
            else{
                if(i > 0 && a[i - 1] == 1){
                    height += 5;
                }
                else{
                    height += 1;
                }
            }
        }

        if(alive){
            cout << height << '\n';
        }
        else{
            cout << -1 << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}