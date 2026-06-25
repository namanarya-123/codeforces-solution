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
      for(long long i=0; i<n; i++)
      cin>>arr[i];


      vector<pair<long long, long long>>v;
      for(int i=0; i<n; i++)
      {
        v.push_back({arr[i],i});
      }

      sort(v.begin(), v.end());

      vector<long long>pre(n);
      pre[0] = v[0].first;

      for(int i=1; i<n; i++)
      {
        pre[i] = pre[i-1]+v[i].first;
      }


      vector<long long>dif(n, 0);
      for(int i=n-2; i>=0; i--)
      {
        if(pre[i]>=v[i+1].first)
        {
            dif[i] = i-0+1;
        }
      }

      vector<long long>ans(n);

      for(int i=0; i<n; i++)
      {
        if(dif[i] == 0)
        {
            ans[i]= i-0;
        }else{
            ans[i] = dif[i];
        }
      }

      vector<long long>ra(n);
      for(int i=0; i<n; i++)
      {
        ra[v[i].second] = ans[i];
      }


      for(int i=0; i<n; i++)
      {
        cout<<ra[i]<<" ";
      }

      cout<<endl;


     
    }
    return 0;

}