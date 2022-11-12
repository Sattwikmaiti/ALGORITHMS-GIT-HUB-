#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
      cin>>a[i];

      for(int j=0; j<n; j++)
      {
        int mini=j;
        for(int i=j; i<n; i++)
        {
            
            if(a[i]<a[mini])
               mini=i;
               
               
        }

        swap(a[j],a[mini]);
        
        
      }


      for(int x:a)
        cout<<x<<" ";
}


