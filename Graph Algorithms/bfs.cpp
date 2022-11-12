 #include<bits/stdc++.h>
 using namespace std;

 void bfs(vector<int> graph[],queue<int> &q,vector<int> &route,vector<int> &vis,int node)
    {   
        //only for the first node 
        if(q.empty())
         {q.push(node);
         vis[node]=0;
         }
        // any 
        for(int child:graph[node])
        {
            if(vis[child]==-1)
             {
                 vis[child]=0;
                 q.push(child);
             }
        }
        
        int z= q.front();
        route.push_back(z);
        q.pop();
        if(q.size()==0)
        return ;
        bfs(graph,q,route,vis,q.front());
        
        
    }
    
    vector<int> bfsOfGraph(int v, vector<int> graph[]) {
        // Code here
        
        queue<int> q;
        vector<int> route;
        vector<int> vis(v+1,-1);
        for(int i=0;i<=0;i++)
          {
              if(vis[i]==-1)
               {
                   bfs(graph,q,route,vis,i);
               }
          }
     return route;
    }