#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h)
{
    int ele=a[h];
    int j=l-1;
    // j denotes the pointer to elements less than the pivot element

    for(int i=l;i<=h-1;i++)
     {
        if(a[i]<=ele)
           {
            j++;
            swap(a[i],a[j]);

           }
     }
     swap(a[j+1],a[h]);
     return j+1;

}

void quick(int a[],int l,int h)
{
    if(l<=h)
    {
        int pi=partition(a,l,h);
         quick(a,l,pi-1);
         quick(a,pi+1,h);
    }
    else return ;
}

int main()
{
    int n;
     cin>>n;
     int a[n];
     for(int i=0; i<n;i++)
        cin>>a[i];

        quick(a,0,n-1);

        for(int x:a)
         cout<<x<<" ";


}