#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        long long n;
       cin>>n;

       int count =0;

       for( int i=1; i<=n; i++)
       {
          if(n%i==0)
          {
         
            count++;
          }else{
            break;
          }
       }

       cout<<count<<endl;


    }
    return 0;

}


