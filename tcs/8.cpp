#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ans = 0;

    string s = to_string(n);

    int sz = s.size();

    for(int i=0; i<sz; i++)
    {
        int val = s[i]-'0';
        int nv = 1;

       for(int j = 0; j < sz; j++)
        {
            nv *= val;
        }

        
        

        ans+=nv;
    }

 

    if(n == ans)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO";
    }

    return 0;
}