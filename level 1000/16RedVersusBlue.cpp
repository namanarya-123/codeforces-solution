#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, r, b;
        cin>>n>>r>>b;

        int q = b+1;

        int val  = r/q;
        int rem = r%q;

        string s = "";

        while(q)
        {
            int az = val;
            while(az)
            {
                s+='R';
                r--;
                az--;
            }
            if(rem)
            {
                s+='R';
                rem --;
                r--;
            }
            if(b)
            {
              s+='B';
              b--;
            }

            q--;

        }

        cout<<s<<endl;
    }

    return 0;
}