#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Number
{
public:
    void CalcPath(priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> &pq , vector<long long> &dist , int path[] , long long mod , vector<pair<int,int>> adj[])
    {
        dist[0] = 0;
        memset(path,0,sizeof path);
        path[0] = 1;
        pq.push({0,0});
        map<pair<int,int>,int> mp;
        while(!pq.empty())
        {
            auto u = pq.top().second;
            pq.pop();
            for(auto x : adj[u])
            {
                int a = x.first;
                int b = x.second;

                if(mp[{u,a}]) continue;
                if(dist[a] > dist[u] + b)
                {
                    dist[a] = dist[u] + b;
                    path[a] = path[u];
                    pq.push({dist[a],a});
                }
                else if(dist[a] == dist[u] + b)
                {
                    path[a] = (path[a] + path[u])%mod;
                }
                mp[{u,a}]++;
            }
        }
    }
    int countPath(int n , vector<vector<int>> &roads)
    {
        vector<pair<int,int>> adj[n];
        for(auto i : roads)
        {
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<long long> dist(n,1e9+8);
        int path[n];
        long long mod = 1e9+7;
        map<pair<int,int>,int> mp;
        CalcPath(pq,dist,path,mod,adj);
        return path[n-1];
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , m;
        cin>>n>>m;
        int u , v;

        vector<vector<int>> adj;
        for(int i = 0 ; i < m ; ++i)
        {
            vector<int> temp;
            for(int j = 0 ; j < 3 ; ++j)
            {
                int x;
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        Number N;
        cout<<N.countPath(n,adj)<<"\n";
    }
}
