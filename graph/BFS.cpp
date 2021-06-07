#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool visited[100];
int level[100]; // to find out length or distance of node from source
vector<int> graph[100];

void distance_node(int start,int node){
   for(int i=start;i<=node;i++){
    cout<<i<<": "<<level[i]<<endl;
   }
}

void bfs(vector<int>graph[],int start){
 queue<int>my_que;

 my_que.push(start);
 visited[start]=true;
 level[start]=0;
 while(!my_que.empty()){
        vector<int>:: iterator ptr;
        int x;
        x=my_que.front();
        my_que.pop();
        cout<<x<<" ";



    for(ptr=graph[x].begin();ptr<graph[x].end();ptr++){
        if(visited[*ptr]==false){
          level[*ptr]=level[x]+1;
          visited[*ptr]=true;
            my_que.push(*ptr);
        }
        }
 }
 cout<<"\t"<<endl;
}
int main()
{
    int node,edge;

    cout<<"Enter the number of node and edge"<<endl;
    cin>>node>>edge;


    //cout<<ceil((edge+1)/2)<<endl;
    cout<<"Enter the edge pair"<<endl;
cout<<"edge "<<edge<<endl;
for(int i=0;i<edge;i++){
    cout<<"Enter the start and end point of edge"<<endl;
    int u,v;
    cout<<"i: "<<i<<endl;
    cin>>u>>v;
    if(u!=v){
    graph[u].push_back(v);
    graph[v].push_back(u);
    //i+=2;
    }
    else{
      graph[u].push_back(v);
      //i++;
    }


 }
cout<<"bfs calling"<<endl;
bfs(graph,1);
cout<<"Distance from source node :"<<1<<endl;
distance_node(1,node);

    }



