#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int n)
{
    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    long long pp[n],max=0;
    memset(pp,0,sizeof(pp));
 
    for (long long p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 

    for (int p = 2; p <= n; p++){
        if (prime[p]){
            long long x=log(n)/log(p);
            pp[p]=x;
        }
    }
    for(long long i=1;i<n;i++) {
        if(pp[i]>max) max=pp[i];
    }
    cout<<max<<endl;    
}

 

int main()
{
    long long n = 600851475143;
         SieveOfEratosthenes(n);

    return 0;
}