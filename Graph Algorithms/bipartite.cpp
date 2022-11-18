#include<bits/stdc++.h>
using namespace std;




int bfs( vector<int> adj[],vector<int> &colour,int k,int i )
{
    queue<int> q;
    q.push(i);
    colour[i]=0;
    
    
    while(!q.empty())
    {   
        int z=q.front();
        q.pop();
        
        for(int child : adj[z])
     {
         if(colour[child]==-1)
          {
              q.push( child);
                colour[child]=colour[z] ^ 1;
                
                
          }
          else 
          {
              if(colour[child]^ colour [z]   == 0)
                k=0;
          }
     }
     
    }
  
    if(k==0)return 0;
    else return 1;
     
     
     
     
     
}



	bool isBipartite(int v, vector<int>adj[]){
	    // Code here
	    
	   
	    vector<int> colour(v+1,-1);
	   
	   
	   
	    for(int i=0;i<v;i++)
	      {
	          if(colour[i]==-1)
	            { 
	              int k= bfs(adj,colour,1,i);
	              if(k==0)
	              return false;
	                
	            }
	      }
	    return true;
	    
	    
	}