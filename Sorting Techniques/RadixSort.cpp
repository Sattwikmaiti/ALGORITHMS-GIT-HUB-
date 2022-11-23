#include<bits/stdc++.h>
using namespace std;
void radixSort(int arr[], int n) 
{ 
   // code here
   vector<int> a[10];
    int tt=*max_element(arr,arr+n);
   int max_length=0;
   while(tt>0)
   {
       max_length++;
       tt=tt/10;
   }
  // TC = o(n*max_length)
    max_length++;
   int i=1;
   while(max_length--)
   { 
       
      for(int j=0;j<n;j++)
      a[(arr[j]/(int)pow(10,i-1))%10].push_back(arr[j]);
      
      int l=0;
      for(int k=0;k<=9;k++){
          if(a[k].size()!=0)
             {
                 for(int x:a[k])
                     {
                         arr[l]=x;
                         l++;
                     }
             }
             a[k].clear();
             
         
      }
      
       
       
       i++;
       
       
   }
   
   
   
   
} 