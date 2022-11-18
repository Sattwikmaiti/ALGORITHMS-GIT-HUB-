#include<bits/stdc++.h>
using namespace std;


int spanningTree(int n, vector<vector<int>> adj[])
    {
        // code here
      
        vector<int> vis(n,0);
        
         
        
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        int s=0;
        
        while(true)
          {   
              pair<int,int> p=pq.top();
              pq.pop();
              // if the node was not visited we will include in mst
              if(vis[p.second]!=1)
              {
             vis[p.second]=1;
              s+=p.first;
              // iteratimng all the childs of the node 
              vector<vector<int>> v = adj[p.second];
              for(vector<int> z : v)
                 {
                     int w=z[1];
                     int node=z[0];
                     if(vis[node]==0 )
                       pq.push({w,node});
                           
                       
                     
                     
                 }
              }
              
              // all nodes are visited
              
                 if(*min_element(vis.begin(),vis.end())==1)
                    break;
              
                  
              
              
              
              
              
          }
          
          return s;
    }