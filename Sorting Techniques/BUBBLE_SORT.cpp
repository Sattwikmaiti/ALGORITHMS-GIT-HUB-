#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
        cin>>a[i];


// arrange in ascending
for(int p=1;p<=n;p++)
{bool b=false;
    for(int i=0;i<n-p;i++)
      {
        if(a[i]>a[i+1])
           {
            swap(a[i],a[i+1]);
              b=true;
           }
      }
      if(b==false)
        break;

}


for(int x:a)
  cout<<x<<" ";

}