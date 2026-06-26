#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    
       ll t;
       cin>>t;

       while(t--)
       {
            ll n;
            cin>>n;

            vector<ll>arr(n);
            for(ll i=0; i<n; i++)
            cin>>arr[i];

            ll gcde = 0;
            ll gcdo = 0;

            for(int i=0; i<n; i++)
            {
                if(i%2 == 0)
                {
                    gcde = __gcd(arr[i], gcde);
                }else{
                    gcdo = __gcd(arr[i], gcdo);
                }
            }


            bool flag = true;

            for(int i=0; i<n; i++)
            {
                if(i%2==1)
                {
                    if(arr[i]%gcde == 0)
                    {
                        flag = false;
                        break;
                    }
                }
            }

            if(flag == true)
            {
                cout<<gcde<<endl;
                continue;
            }
             flag = true;

            for(int i=0; i<n; i++)
            {
                if(i%2==0)
                {
                    if(arr[i]%gcdo == 0)
                    {
                        flag = false;
                        break;
                    }
                }
            }

            if(flag == true)
            {
                cout<<gcdo<<endl;
                
            }else{
                cout<<0<<endl;
            }
       }
    
    return 0;

}
