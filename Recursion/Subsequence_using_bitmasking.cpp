#include <bits/stdc++.h>
 using namespace std;

#define ll long long int 
int main(){
    ll n;
    cin >>n;
   ll a[n];
   for(ll i = 0; i < n;i++)
     cin>>a[i];


     for(ll i=0;i<=(ll)pow(2,n);i++){

        vector<ll> v;
         ll k=i;
         int j=n-1;
         while(k>0)
         {
          int r=k%2;
          k=k/2;
          if(r==1)
             v.push_back(a[j]);
             j--;
         }

         for(int x:v)
           cout <<x<<" ";
           cout<<endl;
     }


}