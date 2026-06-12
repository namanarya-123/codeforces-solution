#include <bits/stdc++.h>
using namespace std;

bool find(long long n)
{
    long long val = n;

    while(val != 0)
    {
        long long rem = val % 10;

        if(rem != 0)
        {
            if(n% rem != 0)
            return 0;
        }

        val /= 10;
    }

    return 1;
}
int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        while(!find(n))
        {
            n = n+1;
        }

        cout<<n<<endl;


    }
    return 0;

}
