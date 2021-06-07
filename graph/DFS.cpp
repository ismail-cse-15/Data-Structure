#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

bool visited[100];

void dfs_recursive(vector<int> graph[],int node){
    cout<<node;
    visited[node]=true;
    vector<int> :: iterator ptr;
    for(ptr=graph[node].begin();ptr<graph[node].end();ptr++){

        if(visited[*ptr]==false){
            dfs_recursive(graph,*ptr);
        }
    }


}

void dfs_stack(vector<int> graph[],int source_node){
   stack<int>my_stack;
   my_stack.push(source_node);
   visited[source_node]=true;
   while(!my_stack.empty()){
    //cout<<"Start"<<endl;
    int working_node=my_stack.top();
    my_stack.pop();
    cout<<working_node<<"->";
    vector<int> :: iterator ptr;
    for(ptr=graph[working_node].begin();ptr<graph[working_node].end();ptr++){
            //cout<<"out"<<endl;
    if(visited[*ptr]==false)
    {

        my_stack.push(*ptr);
        visited[*ptr]=true;

    }

    }


}

}
int main(){

    int nodes,edges,start_node;
    vector<int>graph[100];

    cout<<"Enter the number of nodes and edges"<<endl;
    cin>>nodes>>edges;
    cout<<"Enter two end point's of edges"<<endl;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    cout<<"Enter starting node"<<endl;
    cin>>start_node;
    cout<<"Calling DFS implemented in recursive way"<<endl;
    dfs_recursive(graph,start_node);
//    cout<<"Calling DFS implemented by using stack"<<endl;
//    dfs_stack(graph,start_node);

    return 0;


}
