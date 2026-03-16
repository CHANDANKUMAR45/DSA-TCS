// 20 march 2025    pyq

#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>>adj[1001];

vector<int>dijkstra(int vertices, int source , vector<int>& parent){
    vector<int>dist(vertices+1,INT_MAX);
    dist[source]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,source});

    while(!pq.empty()){
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();

        if(d>dist[u]) continue;
        for(auto edge : adj[u]){
            int v=edge.first;
            int weight=edge.second;
            if(dist[u]+weight<dist[v]){
                dist[v]=dist[u]+weight;
                parent[v]=u;
                pq.push({dist[v],v});
            }
        }
    }

    return dist;


}

void printPath(const vector<int>&parent, int target){
    if(parent[target]==-1){
        cout<<target;
        return;
    }
    printPath(parent, parent[target]);
    cout<<" -> "<<target;
}

int main(){
    

    int vertices,edges;
    cin>>vertices>>edges;

    

    for(int i=0;i<edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }

    int source,target;
    cin>>source>>target;

    vector<int>parent(vertices+1,-1);
    vector<int>dist=dijkstra(vertices,source,parent);

    // cout<<"Shortest path from "<<source<<" to "<<target <<" is : ";
    // printPath(parent,target);
    // cout<<endl;
    cout<<"Total weight = "<<dist[target]<<endl;


}