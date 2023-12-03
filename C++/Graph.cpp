#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph
{
  public:
    unordered_map<int, list<int> > adj;
    void addEdge(int u , int v , bool dir)
    {
        adj[u].push_back(v);
        if(dir == 0)
        {
          adj[v].push_back(u);
        }
    }
    void print()
    {
        for(auto i : adj)
          {
            cout<<i.first<<" -> ";
            for(auto j : i.second)
              {
                cout<<j<<" , ";
              }
            cout<<endl;
          }
    }
};

int main()
{
  Graph g; 
  int n;
  cout<<"Enter number of node : ";
  cin>>n;
  int m;
  cout<<"Enter number of edges : ";
  cin>>m;
  for(int i = 0 ; i < m ; i++)
  {
    int u,v;
    cin>>u>>v;
    g.addEdge(u,v,0);
  }
  g.print();
  return 0;
}

