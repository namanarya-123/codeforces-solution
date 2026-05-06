#include <bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    long long t;
    cin>>t;

    while(t--){
        long long n,m, i, j;
        cin>>n>>m>>i>>j;
int tl = abs(i - 1) + abs(j - 1);
int tr = abs(i - 1) + abs(j - m);

int bl = abs(i - n) + abs(j - 1);
int br = abs(i - n) + abs(j - m);

        if(tl + br >= tr + bl)
        {
            if(bl>=tr)
            {
                cout<<1<<" "<<1<<" "<<n<<" "<<1<<endl;

            }else{
                cout<<1<<" "<<1<<" "<<1<<" "<<m<<endl;

            }
        }else{
            if(bl>=tr)
            {
                cout<<n<<" "<<m<<" "<<n<<" "<<1<<endl;

            }else{
                cout<<n<<" "<<m<<" "<<1<<" "<<m<<endl;

            }

        }


        
    }
    return 0;

}


