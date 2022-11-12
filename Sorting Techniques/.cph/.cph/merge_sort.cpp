#include<bits/stdc++.h>
  using namespace std;
void merge(int a[], int l, int midp, int u)
{
   // size of first half
   int n1=midp+1-l;
   //size of second half
   int n2=u-midp;
   // make left and right half array
   int L[n1],R[n2];
   for(int i=0;i<n1;i++)
   L[i]=a[l+i];
   
   for(int i=0;i<n2;i++)
   R[i]=a[midp+1+i];
   
   // merge two sorted array (concept on a same array). since we stored
   //two array in L and R .
   //.we can directly 
   // apply it . lower limit of a[] will be l and not zero ..since at different
   //merging process l is changing 
   // the left side is sorted than right side
   int ind=l;
   //index of L and R
   int i=0,j=0;
   while(i<n1 && j< n2)
   {
       if(L[i]<=R[j])
       {
           a[ind]=L[i];
           ind++;
           i++;
       }
       else {
            a[ind]=R[j];
           ind++;
           j++;
       }
   }
   
   while(i<n1)
   {
       a[ind]=L[i];
           ind++;
           i++;
   }
   while(j<n2)
   {
       a[ind]=R[j];
           ind++;
           j++;
   }
   
   
   
   
   
}
    
    void mergeSort(int a[], int l, int u)
    {
        //code here
        if(l>=u)
        return ;
        if(l<u)
    {
    int midp=l+(u-l)/2;
     mergeSort(a,l,midp);
     mergeSort(a,midp+1,u);
    merge(a,l,midp,u);
    }
    }


    int main()
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
          cin>>a[i];

mergeSort(a,0,n-1);
for(int x:a)
  cout<<x<<" ";

         
    }

