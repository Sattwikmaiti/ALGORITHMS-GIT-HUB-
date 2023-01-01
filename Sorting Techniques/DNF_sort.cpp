#include<bits/stdc++.h>
using namespace std;
int main()
{  /// sort 0,1,2 
    int n;
     cin>>n;
     int a[n];
     for(int i=0; i<n;i++)
        cin>>a[i];


int l=0,m=0,h=n-1;
while(m<=h)
{

    if(a[m] ==1)
       m++;
       else if(a[m]==0)
          {
            swap(a[m],a[l]);
            l++;
            m++;
          }
          else{
            // reason we know that before m we are sorted ..but have no idea after m  example : 1 2 0 if we do m++ in this block we will understand the problem 
            swap(a[m],a[h]);
            h--;

          }
}

for(int x: a)
 cout<<x<<" ";


}