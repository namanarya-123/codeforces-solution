#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n, k, q;
        cin>>n>>k>>q;

        vector<int>arr(n);

        for(int i=0; i<n; i++)
        cin>>arr[i];
        
        long long  ans =0;
         long long  j = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] <=q )
            {
                if(i-j+1 >=k )
                {
                  ans+=(i-j+1)-k+1;
                }
            }else{
                j= i;
                j++;
            }

        }

        cout<<ans<<endl;
    }
    return 0;

}


