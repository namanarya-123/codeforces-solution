#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    long long t;
    cin>>t;

    while(t--){

       string s;
       cin>>s;
       int n = s.size();

       if(s[0] == s[n-1])
       {
        cout<<s<<endl;
       }else{
         s[n-1] = s[0];
        cout<<s<<endl;
       }





    }
    return 0;

}


