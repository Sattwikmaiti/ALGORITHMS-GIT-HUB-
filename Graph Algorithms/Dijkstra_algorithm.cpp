	#include<bits/stdc++.h>
    using namespace std;
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
  int main()
  {
    //vector pass karo bass 
  }
    vector <int> dijkstra(int n, vector<vector<int>> graph[], int s)
    {  
        // Code here
        // infinity distance 
          vector<int> dis(n,1e9);
          //min heap 
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; 
          dis[s]=0;
          // we store the weight and number
          pq.push({0,s});
          while(!pq.empty())
          {
             pair<int,int>  z=pq.top();
              pq.pop();
              int dist=z.first;
              for(vector<int> child : graph[z.second])
               {  // checking whether the distance 
               // child[0]=number child[1]=weight
               //to reach child[0]  from z.second is shorter than earlier distance
                   if(dis[child[0]]>=(dist+child[1]))
                      {
                          dis[child[0]]=(dist+child[1]);
                          pq.push({dis[child[0]],child[0]});
                      }
                   
               }
              
              
          }
          return dis;
    }