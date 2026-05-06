#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    long long t;
    cin>>t;

    while(t--){
       long long n , k;
       cin>>n>>k;

       vector<long long>arr(n*k);

       for(long long i=0; i<n*k; i++)
       {
          cin>>arr[i];
       }

       long long ans =0;

       long long med = (n + 1) / 2;

       long long pos = n - med+1;

        long long j = n*k-1;

        long long i=1;

        while(j>=0)
        {
            if(i==pos)
            {
                if(k>0)
                {
                ans+=arr[j];
                
                k--;
                }
                i=1;
                
            }else{
                i++;

            }
            
            j--;

        }

        cout<<ans<<endl;



    }
    return 0;

}


