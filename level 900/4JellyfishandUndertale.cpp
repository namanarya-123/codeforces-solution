#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
       int a, b, n;
       cin>>a>>b>>n;

       vector<int>arr(n);

       for(int i=0; i<n; i++)
       cin>>arr[i];

       int time =0;
       time+=b-1;

       for(int i=0; i<n; i++)
       {
          int y = arr[i]+1;
          if(y>a)
          {
            time+=
          }
       }

        



    }
    return 0;

}