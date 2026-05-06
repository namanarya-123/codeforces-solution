#include <bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    long long t;
    cin>>t;

    while(t--){
        long long a, b;
        cin>>a>>b;

        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }

        long long exc = abs(a-b);
        if(a>b)
        {
            long long rem = a%exc;

            long long sec =  exc - rem;

            if(sec>rem)
            {
                cout<<exc<<" "<<rem<<endl;
                continue;
            }else{
                cout<<exc<<" "<<sec<<endl;
                continue;
            }
        }else{
            long long rem = b%exc;

            long long sec = exc - rem;

            if(sec>rem)
            {
                cout<<exc<<" "<<rem<<endl;
                continue;
            }else{
                cout<<exc<<" "<<sec<<endl;
                continue;
            }

        }
    }
    return 0;

}


