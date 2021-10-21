#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPower(int x, long int y)
{
    double w=log(x);
    double v=log(y);
    double test=w/v;
    int test1=int(w/v);
    return (test==test1);
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r,temp=0,min,sum=0,min1;
        cin>>n;
        cin>>l;
        cin>>r;
        int a;
        min1=l;
        for(int i=l;i<=r;i++){
            a=n;
            sum=0;
            if(isPower(a,i)){
                min1=i;
                break;
            }
        
            else{
                while(a>0){
                    sum+=a%i;
                    a=a/i;
                }
                cout<<i<<sum<<endl;
                if(sum<min){
                    min1=i;
                    min=sum;
                }
                if(i==l){
                    min=sum;
                }
            }
        }
        //cout<<min1<<endl;
    }
}