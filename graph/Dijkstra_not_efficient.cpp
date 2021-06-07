#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int distance_[100];
int cost[100][100];

void dijkstra(vector<int>graph[],int start_node){
      queue<int>my_queue;
      my_queue.push(start_node);
      distance_[start_node]=0;

      while(!my_queue.empty()){
        int x;
        vector<int>::iterator ptr;
        x=my_queue.front();
        my_queue.pop();
        for(ptr=graph[x].begin();ptr<graph[x].end();ptr++){
            if((distance_[x]+cost[x][*ptr])<distance_[*ptr]){
                distance_[*ptr]=distance_[x]+cost[x][*ptr];
                my_queue.push(*ptr);
            }
        }
      }

}

int main()
{


    int node, edge,start_node;
    vector<int>graph[105];
    cout<<"Enter the number of nodes and edges"<<endl;
    cin>>node>>edge;
    cout<<"Enter edge's end point and weight"<<endl;
    for(int i=0;i<edge;i++){
        int u,v,w;
        cin>>u>>v>>w;
        //if graph is directed
//        graph[u].push_back(v);
//        cost[u][v]=w;
        //if graph is undirected
        if(u!=v){
            graph[u].push_back(v);
           graph[v].push_back(u);
            cost[u][v]=w;
            cost[v][u]=w;
        }
        else{
            graph[u].push_back(v);
            cost[u][v]=w;

        }


    }
    for(int i=0;i<node;i++){
        distance_[i]=100000;
    }
    cout<<"Calling Dijkstra"<<endl;
    cout<<"Enter start node"<<endl;
    cin>>start_node;
    dijkstra(graph,start_node);
    cout<<"Distance from source node 1"<<endl;
    for(int i=start_node;i<node;i++){
        cout<<i<<" "<<distance_[i]<<endl;
    }


}
