#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // create and from u to v
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
        void printAdjList()
        {
            for (auto i : adj)
            {
                cout << i.first << "->";
                for (auto j : i.second)
                {
                    cout << j << ",";
                }
                cout << endl;
            }
        }
    }
};

int main()
{

    return 0;
}