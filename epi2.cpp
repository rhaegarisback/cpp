#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int x,y,g,op;
       cin>>x>>y;
       cin>>g;
       if(x>y){
           op=x-y;
           for(int i=1;i<g;i++){
           op*=2;
           }
           if(op>x || op>y){
               
           }
       }
       else if(y>x){
           op=y-x;
           for(int i=1;i<g;i++){
           op*=2;
           }
       }
       if(x-)
       cout<<op<<endl;
    }
}