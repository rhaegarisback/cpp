#include <iostream>
using namespace std;

int main(){
    long long t,n,i,odd,even;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>2){
            even=n/2;
            odd=n-even;
            if(odd%2==0) cout<<n<<endl;
            else cout<<n-1<<endl;
        }
        
    }
    return 0;
}
