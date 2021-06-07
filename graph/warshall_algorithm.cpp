#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int cost[100][100];
//for finding path
int path[100][200];

void warshall(vector<int> graph[],int start_node,int last_node){

  for(int k=start_node;k<=last_node;k++){
    for(int i=start_node;i<=last_node;i++){
        for(int j=start_node;j<=last_node;j++){
            //cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j])
            if((cost[i][k]+cost[k][j])<cost[i][j]){
              cost[i][j]=cost[i][k]+cost[k][j];
              path[i][j]=path[i][k];
            }

        }
    }
  }
}
void findpath(int start, int endn){
    cout<<start;
    int i;
    while(start!=endn){
        i=path[i][endn];
        cout<<"->"<<i;

    }
    cout<<endl;
 }


int main()
{


    int node,edge,start_node;
    vector<int> graph[100];
    cout<<"Enter the number of node and edges"<<endl;
    cin>>node>>edge;
    cout<<"Enter the end points of edges and weight"<<endl;

  //making graph
    for(int i=0;i<edge;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back(v);
        cost[u][v]=w;
        }
       cout<<"Enter first node"<<endl;
       cin>>start_node;

       //assign infinite to non connected edges

       for(int i=start_node;i<=(start_node+node-1);i++){
        for(int j=start_node;j<=(start_node+node-1);j++){
            path[i][j]=j;
            if(i!=j && cost[i][j]==0)
            {
            cost[i][j]=10000;


            }
        }
        }


         cout<<"Calling warshall algorithm"<<endl;
        //calling Warshall algorithm
        warshall(graph,start_node,(start_node+node-1));

        for(int i=start_node;i<=(start_node+node-1);i++){
            for(int j=start_node;j<=(start_node+node-1);j++){
                cout<<cost[i][j]<<" ";
            }
            cout<<"\t\n";
        }

  //cout<<"Find path between 4 and 3"<<endl;
  //findpath(4,3);

}

