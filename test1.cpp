#include <iostream>
using namespace std;

int main(){
    long long t,n,i,odd=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(i>2){
            if(n%4==0 || (n+1)%4==0) cout<<n<<endl;
            if(n%4!=0 && n%2==0) cout<<n-2<<endl;
            if((n-1)%4==0) cout<<n-1<<endl;
        }
        else{
            cout<<odd<<endl;
        }
        
    }
}