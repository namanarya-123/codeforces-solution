#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<ll>&arr, ll val)
{
    vector<ll>num;

    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] != val)
        num.push_back(arr[i]);
    }

    for(int i=0; i<num.size(); i++)
    {
        if(num[i] != num[num.size() - i - 1])
        {
            return 0;
        }
    }

    return 1;

}

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
         for(int i=0; i<n; i++)
         cin>>arr[i];
         bool found = false;

         for(int i=0; i<n; i++)
         {
            if(arr[i] != arr[n-i-1])
            {
                found = true;
                if(check(arr, arr[i]) || check(arr, arr[n-i-1]))
                {
                    cout<<"YES"<<endl;
                }else{
                    cout << "NO" << endl;
                }

                break;
            }
         }
         if (!found)
    cout << "YES\n";
       }
    
    return 0;

}
