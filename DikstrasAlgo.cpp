//Author- Suryakant Chandrakar
//contact-785surya@gmail.com

#include <iostream>
#include <bits/stdc++.h>
#include <limits>
using namespace std;

vector<int> dijkstraAlgo(int n, int source, vector<pair<int, int>> G[])
{
    int INFINITE = std::numeric_limits<int>::max();
    vector<int> Distance(n, INFINITE);
    Distance[source] = 0;
    set<pair<int, int>> QUE;
    QUE.insert({0, source});
    while (!QUE.empty())
    {
        auto top = QUE.begin();
        int u = top->second;
        QUE.erase(top);
        for (auto next : G[u])
        {
            int v = next.first, weight = next.second;
            if (Distance[u] + weight < Distance[v])
            {
                if (QUE.find({Distance[v], v}) != QUE.end())
                    QUE.erase(QUE.find({Distance[v], v}));
                Distance[v] = Distance[u] + weight;
                QUE.insert({Distance[v], v});
            }
        }
    }
    return Distance;
}

int main()
{
    int n, m, s, x, y, z;
    cout << "Enter the number of nodes:" << endl;
    cin >> n;
    cout << "Enter the number of edges:" << endl;
    cin >> m;
    s = 0; // initialize the distance of source vertex to zero

    vector<pair<int, int>> *G = new vector<pair<int, int>>[n]; // creating min-priority queue
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        std::cout << "\n\nEnter the  details of edge number : " << (i + 1) << endl;
        cout << "Starting vertex of the edge:" << endl;
        cin >> x;
        cout << "Ending vertex of the edge:" << endl;
        cin >> y;
        cout << "Cost of the edge:" << endl;
        cin >> z;
        G[x].push_back(make_pair(y, z)); //( vertex,distance)
    }

    ans = dijkstraAlgo(n, s, G); //ans has the distance from source to all the vertices.
    cout << "Answer is :" << endl
         << endl;
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}