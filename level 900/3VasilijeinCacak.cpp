#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        long long n, k, x;
        cin>>n>>k>>x;

        long long small = (k*(k+1))/2;

        long long  y = n-k;

        long long big = (n*(n+1))/2 - (y*(y+1))/2;

        if(x>= small && x<=big)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;



    }
    return 0;

}