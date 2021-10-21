#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int xxx(int n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
           
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 

    for (int p = 2; p <= n; p++)
        if (prime[p])
            return p;
}
void solve(int n,int l,int r){
    while(xxx())
}
 
// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,l,r;        
        cin>>n;
        cin>>l;
        cin>>r;
        


    }
    SieveOfEratosthenes(n);
    return 0;
}