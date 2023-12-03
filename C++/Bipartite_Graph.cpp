#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool isBipartite(int V , vector<int> adj[])
{
    //vector to store colour either 0/1 {-1 = uncoloured}

    vector<int> col(V,-1);
    //storing {vertex , colour}
    queue<pair<int,int>> q;

    for(int i = 0 ; i < V ; i++)
    {
        if(col[i] == -1)
        {
            q.push({i,0});
            col[i] = 0;

            while(!q.empty())
            {
                pair<int,int>  p = q.front();
                q.pop();

                int v = p.first; // current vertex
                int c = p.second; // vertex colour

                for(auto it : adj[v])
                {
                    //if coloured with parent vertex colour then bipartite not possible
                    if(col[it] == c)
                    {
                        return 0;
                    }

                    else if(col[it] == -1)
                    {
                        //colouring with opp. colour to parent
                        col[it] = (c) ? 0:1;
                        q.push({it,col[it]});
                    }
                }
            }
        }
    }
    //if all vertex are coloured such that no 2 connected vertex have same colour
    return 1;
}

int main()
{
    int V,E;
    V = 4 , E = 8;

    vector<int> adj[V];
    adj[0] = {1,3};
    adj[1] = {0,2};
    adj[2] = {1,3};
    adj[3] = {0,2};

    bool ans = isBipartite(V,adj);
    if(ans)
    {
        cout<<"Bipartite\n";
    }
    else cout<<"Not Bipartite\n";
    return 0;
}
