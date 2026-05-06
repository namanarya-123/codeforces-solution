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

         vector<int>vis(s.size(), 0);
         int c_0 =0;
         int c_1 =0;

         int n = s.size();

         for(int i=0; i<s.size(); i++)
         {
            if(s[i] == '0')
            {
                 c_0++;
            }else{
                 c_1++;                
            }
         }

         int val = min(c_0, c_1);

         if(val%2 == 0)
         cout<<"NET"<<endl;
         else
         cout<<"DA"<<endl;

         
    }
    return 0;

}


