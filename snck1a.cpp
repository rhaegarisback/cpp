#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t, z=1;
    cin>>t;
    while(t--){
        long long n,d,c,m;
        cin>>n>>d;
        cin>>c>>m;
        
        string s;
        cin>>s;
        
        long long cat=0, dog=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='C') cat++;
            else dog++;
            
        }
        if(d>=dog && c>=cat){
        cout<<"Case# "<<z<<":"<<" "<<"YES"<<"\n";    
        z++;
        } 
        else if(d<dog){
        cout<<"Case# "<<z<<":"<<" "<<"NO"<<"\n";    
        z++;    
        }
        else{
            int flag=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='D'){
                    
                    d--;
                    dog--;
                    c+=m;
                }
                else{
                    if(c==0 && dog>0){
                        flag=1;
                        break;
                    }
                    c--;
                    cat--;
                    
                }
            }
            if(flag==1){ 
                cout<<"Case# "<<z<<":"<<" "<<"NO"<<"\n"; 
                z++;
            }
            else{
                cout<<"Case# "<<z<<":"<<" "<<"YES"<<"\n"; 
                z++;
            }
        }
    }
}