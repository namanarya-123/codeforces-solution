#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
      int n;
      cin>> n;

      string s;
      cin>>s;

      stack<char>st;

      for(int i=0; i<n; i++)
      {
        if(s[i] == ')')
        {
            if( ! st.empty() && st.top() == '(')
            {
                st.pop();
            }
        }
        else 
            {
                st.push('(');
            }
      }

      cout<<st.size()<<endl;

    }

    return 0;
}