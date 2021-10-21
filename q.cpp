#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        long long b[n]={0};
        
        int i=0;
        
         while(i<n-1){
             long long count=0; 
             if(a[i]<a[i+1]){
                 b[i]=0;
                 i++;
                 
            }
             
             else{
               
                 int j=i+1;
                 while(a[j]<=a[i] && j<n){
                     if(a[j]==a[i]) count++;

                     j++;
                }
                 for(int l=i;i<j;l++){
                     b[i]=count;
                }
                  i=j;
            }
              
       }
        
           
        for(int i=0;i<n;i++){
            cout<<b[i]<<"\n";
        }
    }

}