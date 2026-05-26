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

        vector<int>v(n);
        
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int ans =INT_MAX;

        bool find = false;

        for(int i=0; i<n; i++)
        {
            int find = v[i]%k;

            if(find == 0)
            {
                find = true;
                cout<<0<<endl;
                break;
            }else{
           ans = min(ans, k-v[i]%k);
            }
        }


    
         if(find == false)
         {
        if(ans == k)
        cout<<0<<endl;
        else
        cout<<ans<<endl;
         }


    }
    return 0;

}