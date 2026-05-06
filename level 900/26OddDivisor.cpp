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

       if(n==2)
       {
         cout<<"NO"<<endl;
       }else{
         while(n%2 !=1)
         {
            n/=2;
         }

         if(n==1)
         {
            cout<<"NO"<<endl;
         }else{
            cout<<"YES"<<endl;
         }
       }

    }
    return 0;

}


