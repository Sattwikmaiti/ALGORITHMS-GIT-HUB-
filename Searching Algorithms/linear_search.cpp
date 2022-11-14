#include <bits/stdc++.h>
 using namespace std;

int main(){
    int n,ele;
    cin >>n>>ele;
   int a[n];
   for(int i = 0; i < n;i++)
     cin>>a[i];
     bool f=false;
     for(int i = 0; i < n;i++)
       {
        if(a[i]==ele)
             {
                f=true;
                break;
             }
       }
       if(f==true)
          cout<<"YESS"<<endl;
          else cout<<"NO"<<endl;
          

}