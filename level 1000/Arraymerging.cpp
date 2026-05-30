#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
       
        string s;
        cin>>s;

        int c0 =0;
        int c1 = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            c0++;
            else
            c1++;
        }

        
        int op =0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0' )
            {
                if(c1>0)
                {
                    
                    c1--;
                }else{
                    op= s.size()-i;
                    break;
                }
            }else{
                if(c0>0)
                {
                  
                    c0--;
                }else{
                    op= s.size() -i;
                    break;
                }

            }
        }

    

        cout<<op<<endl;


    }
    return 0;

}
