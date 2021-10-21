#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string permute(string a, int l, int r)
{
    if (l == r)
        return a;
    else
    {
         for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}

int main() {
    int x;
    string inp;
    int t;
    cin>>t;
    int b=1;    
    while(t--){
        cin>>inp;
        string op;
        int len=inp.size();
        bool a=true;
        int c0unt[len];
        for(int i=0;i<len;i++)
        {
            c0unt[i]=count(inp.begin(), inp.end(), inp[i]);
            if(c0unt[i]>len/2)
            {
                cout<<"Case #"<<(b)<<": "<<"IMPOSSIBLE"<<endl;
                a=false;
                break;
            }
        }
        if(a){
            
            bool casee=false;
            do
            {        
                op=permute(inp,0,len-1);
                for(int i=0;i<len;i++)
                {
                    if(op[i]==inp[i])
                    {
                        casee=true;
                        break;
                    }
                    else if(i==(len-1)&&op[i]!=inp[i]){
                        cout<<"Case #"<<(b)<<": "<<op<<endl;
                        break;
                        x=1;
                    }
                }
                if(x==1) break;
                
            } while (casee);
            
        }
        b++;
    }
    


	return 0;
}

