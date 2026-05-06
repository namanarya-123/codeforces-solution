#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n, q;
        cin>>n>>q;

        vector<long long>arr(n+1);

        for(int i=1; i<=n; i++)
        cin>>arr[i];

         long long sum=0;

         vector<long long>p(n+1, 0);
        for(int i=1; i<=n; i++)
        {
          sum+=arr[i];
          p[i]= p[i-1]+arr[i];
        }

        while(q--)
        {
            int l, r, k;
            cin>>l>>r>>k;
        
            long long nv = p[l-1]+sum - p[r] + 1LL*(r-l+1)*k;

            if(nv %2 ==1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

    }
    return 0;

}

