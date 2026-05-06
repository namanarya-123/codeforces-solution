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

      if(n<4 || n%2 == 1)
      {
         cout<<-1<<endl;
      }else{
         long long mn = n/4;
         long long mx = ceil(n/6.0);
         cout<<mx<<" "<<mn<<endl;
      }

    }
    return 0;

}

