/*
Question Link :https://codeforces.com/contest/1731/problem/C
You are given an integer array a1,a2,…,an (1≤ai≤n).

Find the number of subarrays of a whose XOR has an even number of divisors. In other words, find all pairs of indices (i,j) (i≤j) such that ai⊕ai+1⊕⋯⊕aj has an even number of divisors.

For example, numbers 2, 3, 5 or 6 have an even number of divisors, while 1 and 4 — odd. Consider that 0 has an odd number of divisors in this task.

Here XOR (or ⊕) denotes the bitwise XOR operation.

Print the number of subarrays but multiplied by 2022... Okay, let's stop. Just print the actual answer.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104). Description of the test cases follows.

The first line of each test case contains a single integer n (2≤n≤2⋅105) — the length of the array a.

The second line contains n integers a1,a2,…,an (1≤ai≤n).

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

*/






#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// binary exponentiation for a^b mod M M=1e9+10
ll binexp(ll a, ll b,ll mod)
                              
{
   
    ll res = 1; // Initialize result
 
    // Update a if it is more than
    // or equal to mod
    a %= mod;
     if(a==0) return 0;
    while (b>0) {

      if(b%2!=0 )
      {
         res= (res * a) %mod;
           b--;
      }
      b=b/2;
      a=(a*a)%mod;
       
    }
 
    return res;
}

// A ^(M-1) == 1 (mod M) , so A^(M-2) == A^-1(mod M) [Fermat little theorem]

//  ( a*(a+1)*(a+2)) / b   % mod
ll prdct_of_three_num(ll k,ll b ,ll mod)
{
   ll v1 = ((((k)*(k+1))%mod *(k+2))%mod)%mod; 
    ll inv=binexp(b,mod-2,mod);
    return (v1 * inv )%mod;

}

//  ( a*(a+1)) / b   % mod
ll prdct_of_two_num(ll k,ll b,ll mod)
{
     ll v2=  (k  *(k+1)) %mod ;
     ll inv =binexp(b,mod-2,mod);
     return (v2 * inv )%mod;


}


int main()
{  
   
 ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

     ll mod=1e9+7;
    ll t;
    cin>>t;

 

while(t--)
 {   

       
    
         

        

             ll n;
             cin>>n;
             ll a[n];
           
             for(int i=0;i<n;i++)
                cin>>a[i];

               

          ll prefxor[n]={0};
          prefxor[0]=a[0];
     //prefix - xor created
          for(int i=1;i<n;i++)
              prefxor[i]=a[i]^prefxor[i-1];
ll count=0;
 

     for(ll j=0;j<=512;j++)
     {
          
vector<ll> mp(2*n+1,0);
 
    for(int i=0;i<n;i++)
 { 
        ll y= (j*j) ^ prefxor[i];

        if(prefxor[i]==(j*j))
        {    
            count++;}
        if(y<(2*n+1))
        count+=mp[y] ;
         if(prefxor[i]<(2*n+1))
         mp[prefxor[i]]++;

 

       
        
         
 }
     

    



 }




cout<<((n*(n+1))/2) -count<<endl;
           


        
    
    






   }
   
  

  

   

 }

