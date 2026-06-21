#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
     long long t;
    cin>>t;

    while(t--){
       
      long long n;
      cin>>n;

      string s;
      cin>>s;

      vector<int>arr(26, 0);
      int ans = 0;

      for(int i=0; i<n ; i++)
      {
         if(arr[s[i] - 'a'] == 0)
         {
            ans+=n-i;
            arr[s[i] - 'a'] = 1;
         }
      }

      cout<<ans<<endl;
     
    }
    return 0;

}