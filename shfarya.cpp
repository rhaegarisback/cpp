#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, z=1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flag=0;
        int a=s.size();
        string l;
        for(int i=0;i<a;i++){
            l[i]=s[i];
        }
         vector<int>count(26);
        for(int i=0;i<26;i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count[i]>(s.size()/2)){
                flag=1;
                break;
            }
        }
        if(flag==0){
            int key=0;
            char k[a];
            int sum=0;
            while(sum!=a){
                sum=0;
                for(int i=1;i<a;i++){
                    k[i-1]=s[i];
                }
                k[a-1]=s[0];
                
                
                // for(int i=0;i<a;i++){
                //     cout<<k[i];
                // }
                // cout<<"\n";
                for(int i=0;i<a;i++){
                    if(k[i]==l[i]){
                        key=1;
                        break;
                    }
                    else{
                        sum+=1;
                    }
                }
                if(key==1){
                    for(int i=0;i<a;i++){
                        s[i]=k[i];
                    }
                }
                if(sum==a){
                    key=0;
                    break;
                }
            }
            if(key==0){
                 cout<<"Case #"<<z<<": ";
                for(int i=0;i<s.size();i++){
                 cout<<k[i];
                }
                cout<<"\n";
            }
        }
        if(flag==1){
            cout<<"Case #"<<z<<": "<<"IMPOSSIBLE"<<"\n";
        }
        z++;
    }
}