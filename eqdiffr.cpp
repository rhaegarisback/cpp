#include <bits/stdc++.h>
using namespace std;




int main(){
    unsigned long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        unsigned long long abc[n];
        for(int i=0;i<n;i++){
            cin>>abc[i];
        }
        if(n<=2){
            cout<<"0"<<"\n";
        }
        else{
            long long max=0;
            long long count=1;
            sort(abc, abc+n);
           
            for(int i=0;i<n-1;i++){
                
                if(abc[i]==abc[i+1]){
                    count++;
                }
                else{
                    count=1;
                }
                if(count>max){
                    max=count;
                }
            }
            if(max==1){
                cout<<n-2<<"\n";
            }
            else{
                cout<<n-max<<"\n";
            }
        }   
    }
    return 0;
}