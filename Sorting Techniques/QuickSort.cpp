#include<bits/stdc++.h>
using namespace std;
 void quickSort(int arr[], int low, int high)
    {
        // code here
        // if low ==high . then we know only one element ..so no need of partition
        if(low<high)
         {
             int pi=partition(arr,low,high);
             // we kept the element at a[high] at pi position i.e 
             // correct pos 
              quickSort(arr,low,pi-1);
              quickSort(arr,pi+1,high);
         }
    }
    
   
    int partition (int arr[], int low, int high)
    {
       // Your code here
       
       int pivot=arr[high];
       int i=low-1;
       for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        
           {
             i++;
              swap(arr[i],arr[j]);
           }
           
           
    }
        // we know that i pointer will point to the element 
        // previous the pivot elemt in the sorted list 
          swap(arr[i+1],arr[high]);
           return i+1;
    }