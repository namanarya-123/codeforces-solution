#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int a , b;
        cin>>a>>b;

        int op = 0;
        if(b == 1)
        {
            b++;
            op++;
        }

        int ans =INT_MAX;
        for(int ad=0; ad<35; ad++)
        {
            int curra = a;
           int b_ = b+ ad;

           int ops = op+ad;
            while(curra>0)
            {
                curra /= b_;
                ops++;
            }

            if(ops>ans)
            break;



            ans = min(ans, ops);

             
        }

        cout<<ans<<endl;
    }

    return 0;
}