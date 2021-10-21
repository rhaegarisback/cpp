#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,s1="";
        int n,p;
        cin>>n>>p;
        cin>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=int(s[i]);
            arr[i]+=p;
            if(arr[i]>122){
                arr[i]=97+(arr[i]-122)%26-1;
            }
        }
        for(int i=0;i<s.size();i++){
            s1+=arr[i];
        }
        cout<<s1<<endl;
    }
}