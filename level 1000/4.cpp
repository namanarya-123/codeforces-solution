#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
     long long t;
    cin>>t;

    while(t--){
       
      long long x;
     cin>>x;
     long long sum = 0;
      long long fm = INT_MAX;
      long long sm = INT_MAX;

     while(x--)
     {
         long long m;
        cin>>m;
        vector< long long>arr(m);

        for( long long i=0; i<m; i++)
        {
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());

         long long n = arr.size();

        if(n>=1)
        {
            sum+=arr[1];
            sm = min(sm, arr[1]);
        }

        fm = min(fm, arr[0]);
     }

      long long val = 0;
     val = sum - sm + fm;

     cout<<val<<endl;



    }
    return 0;

}