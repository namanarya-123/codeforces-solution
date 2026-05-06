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

       vector<long long>arr(n);

       for(int i=0; i<n; i++)
       cin>>arr[i];

       map<long long, long long>m;

       for(long long i=0; i<n; i++)
       m[arr[i]]++;

       long long count =0;

       for(auto it=m.begin(); it!=m.end(); it++)
       {
         count = max(count, it->second);
       }

       long long op =0;

       while(count<n)
       {
         op++;
         if(count *2<=n)
         {
            op+=count;
            count*=2;
         }else{
            op+=n-count;
            count=n;
         }
       }

       cout<<op<<endl;



    }
    return 0;

}


