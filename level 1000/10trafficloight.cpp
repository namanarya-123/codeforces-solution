#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

   
        int n , d;
        cin>>n>>d;

        vector<int>arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());

        int l=0;
         int r = n-1;
        int ans =0;


        
        while(l<=r)
        {
            int ts = 0;
            int val = arr[r];
            ts += val;

            while( ts <= d && l<r)
            {
                ts+=val;
                l++;
            }

            r--;

            if(ts> d)
            ans++;

        }
            

        cout<<ans<<endl;

    

    return 0;
}