#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n , d;
        cin>>n>>d;

        vector<int>arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());

        int l=0; int r = n-1;
        int ans =0;
        
        while(l<=r)
        {
            int p = arr[r];
            
            int no = 1;
            for(int i=2 ; i<n; i++)
            {
                
                no = i*p;
                if(no > d)
                break;
            }

            int len = no/p;

            len--;
            if(l+len < r)
            {
                l= l+len;
                ans++;
            }

            r--;
        }

        cout<<ans<<endl;

    }

    return 0;
}