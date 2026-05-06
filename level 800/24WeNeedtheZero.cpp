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
        int ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        if(n%2 ==1)
        {
            for(int i=0; i<n; i++)
            {
                ans^=arr[i];
            }
            cout<<ans<<endl;
        }else{
            for(int i=0; i<n; i++)
            {
                ans^=arr[i];
            }
            if(ans ==0)
            cout<<0<<endl;
            else
            cout<<-1<<endl;
        }

        

        
      
       
    }
    return 0;

}