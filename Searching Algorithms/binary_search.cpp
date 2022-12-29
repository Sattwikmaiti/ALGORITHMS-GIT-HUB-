#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, target;
   cin >> n >> target;
   int a[n];
   for (int i = 0; i < n; i++)
      cin >> a[i];
   sort(a, a + n);// sorted in ascending order 
   bool found = false;

   int low_index = 0, high_index = n - 1;
   while (low_index <= high_index)
   {
      int midp = low_index + (high_index - low_index) / 2;
      if (a[midp] == target)
      {
         found = true;
         break;
      }
      else
      {
         if (a[midp] > target)
            high_index = midp - 1;
         else
            low_index = midp + 1;
      }
   }
   if (found == true)
      cout << "YES" << endl;
   else
      cout << "NO" << endl;
      

}