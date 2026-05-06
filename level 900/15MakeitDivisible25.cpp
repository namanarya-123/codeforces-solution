#include <bits/stdc++.h>
using namespace std;
  
int find(string s, int idx)
{
   int n = s.size();
   int op = 0;
   for(int i=idx; i>=0; i--)
   {

      if(s[i]!='2' && s[i]!='7')
      {
         op++;
      }else{
         break;
      }
   }

   return op;
}

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
       long long n;
       cin>>n;

       string s = to_string(n);

       int len = s.size();
      

       bool flag = false;

       for(int i=0; i<s.size(); i++)
       {
          if(s[i] == '0')
          {
            flag = true;
            break;
          }
       }

       int op=0;

       if(flag == false)
       {
          if(s[s.size()-1]=='5')
          {
            op = find(s, len-2);
            cout<<op<<endl;
          }else{
            int i = len-1;
            while(s[i] == '5')
            {
               op++;
               i--;
            }

            op = op + find(s, i-1);
            cout<<op<<endl;
          }
       }
        else
        {
            int ans = INT_MAX;

            // 🔹 CASE 1: make "00"
            for(int i = len - 1; i >= 0; i--)
            {
                if(s[i] == '0')
                {
                    for(int j = i - 1; j >= 0; j--)
                    {
                        if(s[j] == '0')
                        {
                            int op = (len - 1 - i) + (i - 1 - j);
                            ans = min(ans, op);
                            break;
                        }
                    }
                    break;
                }
            }

            // 🔹 CASE 2: make "50"
            for(int i = len - 1; i >= 0; i--)
            {
                if(s[i] == '0')
                {
                    for(int j = i - 1; j >= 0; j--)
                    {
                        if(s[j] == '5')
                        {
                            int op = (len - 1 - i) + (i - 1 - j);
                            ans = min(ans, op);
                            break;
                        }
                    }
                    break;
                }
            }

            // 🔹 EXTRA FIX: also consider using '5' (important!)
            // sometimes better than 00/50
            if(s[len - 1] == '5')
            {
                ans = min(ans, find(s, len - 2));
            }
            else
            {
                int i = len - 1;
                int op = 0;

                while(i >= 0 && s[i] != '5')
                {
                    op++;
                    i--;
                }

                if(i >= 1)
                {
                    op += find(s, i - 1);
                    ans = min(ans, op);
                }
            }

            cout << ans << endl;
        }
    
    }
    return 0;

}


