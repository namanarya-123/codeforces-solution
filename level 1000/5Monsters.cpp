#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int>arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++)
        {
            arr[i] = arr[i]%k;
        }

        vector<int>ans;

        for(int i=0; i<n; i++)
        {
            if(arr[i] == 0)
            {
                ans.push_back(i+1);
            }
        }

        for(int i=0; i<n; i++)
        {
            if(arr[i] != 0)
            ans.push_back(i+1);
        }

                for(int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }

        cout << "\n";






        
    }
    return 0;

}


