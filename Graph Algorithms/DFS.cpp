#include<bits/stdc++.h>
using namespace std;
 void dfs(vector<int> graph[],int n,vector<int> &route,vector<int> &visit,int node )
    {
        visit[node]=1;
        route.push_back(node);
        // before entering the parent node 
        for(int child : graph[node])
        {   // before entering child node 
            if(visit[child]==-1)
             {
                
                dfs(graph,n,route,visit,child);
            // leaving child node 
             }
        }
        //leaving parent node 
    
    }
    vector<int> dfsOfGraph(int v, vector<int> graph[]) {
        // Code here
        vector<int> route;
         vector<int> visit(v+1,-1);
        for(int i=0;i<v;i++)
          {
              if(visit[i]==-1)
               dfs(graph,v,route,visit,i);
                   
               
          }
        
        return route;
        
    }