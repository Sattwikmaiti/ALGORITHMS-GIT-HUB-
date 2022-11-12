#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
 int maxSubArray(int nums[],int n) {
     ll s=0,maxi=-1e9;
     for(int i=0;i<n;i++)
     { int x=nums[i];
         s+=x;
         maxi=max(maxi,s);
         if(s<0)
           s=0;
     }
return maxi;
    }
int main()
    
    {

         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
           cin>>a[i];
           cout<< maxSubArray(a,n);

    }
   
