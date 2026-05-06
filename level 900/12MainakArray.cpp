#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
       int n;
       cin>>n;

       vector<int>arr(n);

       for(int i=0; i<n; i++)
       cin>>arr[i];

       int diff = arr[n-1]-arr[0];
       int val =0;

       for(int i=1; i<n; i++)
       {
         val = max(val, arr[i-1]-arr[i]);
       }

        int mx = *max_element(arr.begin(), arr.end());
        int mi = *min_element(arr.begin(), arr.end());

        
        
        diff= max(diff, mx-arr[0]);
        int sm = arr[n-1]-mi;

        diff= max(sm, diff);

        cout<<max(diff, val)<<endl;


    }
    return 0;

}


