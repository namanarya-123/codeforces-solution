#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    long long t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;

        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        vector<int>gc;

      

        for(int i=0; i<n; i++)
        {
            gc.push_back(abs(arr[i] - (i+1)));
        }

        int ans =gc[0];
        for (int i = 1; i < gc.size(); i++) 
        {
        ans = __gcd(ans, gc[i]);
           }

    cout<<ans<<endl;;

    }
    return 0;

}


