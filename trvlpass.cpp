#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n,a,b,t,total;
    string s;
    cin>>t;
    while(t--){
        total=0;
        int ac=0,bc=0;
        cin>>n;
        cin>>a;
        cin>>b;        
        cin>>s;
       
        for(int i=0;i<n;i++){
            if(s[i]=='0') ac++;
            else if(s[i]=='1') bc++;
        }

        
        total=ac*a+bc*b;
        cout<<total<<endl;
    }
}