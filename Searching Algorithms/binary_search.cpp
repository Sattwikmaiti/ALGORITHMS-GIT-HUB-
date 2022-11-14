#include <bits/stdc++.h>
 using namespace std;

int main(){
    int n,ele;
    cin >>n>>ele;
   int a[n];
   for(int i = 0; i < n;i++)
     cin>>a[i];
     sort(a,a+n);
     bool f=false;
     
     int l=0,h=n-1;
     while(l<=h)
     {
        int midp= l+(h-l)/2;
          if(a[midp]==ele)
             {
                f=true;
                  break;
             }
             else {
                if(a[midp]>ele)
                    h=midp-1;
                    else l=midp+1;
                    
             }
     }
       if(f==true)
          cout<<"YESS"<<endl;
          else cout<<"NO"<<endl;
          

}