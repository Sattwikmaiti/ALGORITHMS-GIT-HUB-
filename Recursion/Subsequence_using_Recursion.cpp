#include <bits/stdc++.h>
 using namespace std;

#define ll long long int 


void subsequence(ll a[],int n,int i,vector<int> &v)
{
    if(i==n)
       {  
               
               for(ll x:v)
                 cout <<x<<" ";
                 cout<<endl;
                 return;
        
       }

//take a[i]
v.push_back(a[i]);
subsequence(a,n,i+1,v);
// dont take
v.pop_back();
subsequence(a,n,i+1,v);


}


int main(){
    ll n;
    cin >>n;
   ll a[n];
   for(ll i = 0; i < n;i++)
     cin>>a[i];
     vector<int> stk;
subsequence(a,n,0,stk);



}