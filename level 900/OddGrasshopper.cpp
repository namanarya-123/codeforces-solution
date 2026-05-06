#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    long long t;
    cin>>t;

    while(t--){
       
        long long x, n;
        cin>>x>>n;

        int rem = n % 4;

        long long start = n-rem;

        for(long long i=start+1; i<=n; i++)
        {
            if(x%2==0)
            {
                x = x-i;
               
            }else{
                x = x+i;
                
            }
        }

        cout<<x<<endl;




    



    }
    return 0;

}


