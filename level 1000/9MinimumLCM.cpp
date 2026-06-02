#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        long long n;
        cin >> n;

         if(n%2 == 1)
         {
            bool found = false;

            for(int i = 2; i*i<=n; i++)
            {
                if(n%i == 0)
                {
                    int an = n/i;
                    int bn = n- an;

                     cout << an << " " << bn << endl;

                    found = true;
                    break;
                }

                
            }

            if(found == false)
            {
                cout << 1 << " " << n - 1 << endl;
            }
        }
        else
        {
            cout << n/2 << " " << n/2 << endl;
        }
    


         
           

    }

    return 0;
}