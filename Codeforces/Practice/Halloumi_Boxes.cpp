#include<bits/stdc++.h>
using namespace std;

void solution(){
    int t; 
    cin >> t; 
    while (t--)
    {
        long long n, k;  
        cin >> n >> k; 
        vector<long long> a(n); 
        for (int i = 0; i < n; i++) 
            cin >> a[i]; 
        

        vector<long long> copy_a = a; 
        sort(copy_a.begin(), copy_a.end()); 

    
        if (copy_a == a || k > 1)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl; 
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solution();
    return 0;
}