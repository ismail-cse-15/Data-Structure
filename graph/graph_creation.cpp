#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
 int edge,node,u,v;

 cout<<"Enter the number of node and edge"<<endl;
 cin>>node>>edge;
  vector<int> graph[edge];

 for(int i=0;i<ceil((edge+1)/2);i++){
    cout<<"Enter the start and end point of edge"<<endl;
    cin>>u>>v;
    if(u!=v){
    graph[u].push_back(v);
    graph[v].push_back(u);
    }
    else
        graph[u].push_back(v);

 }
 vector<int>:: iterator ptr;
for(int i=1;i<=node;i++){
        cout<<i;
    for(ptr=graph[i].begin();ptr<graph[i].end();ptr++){
        cout<<"->"<<*ptr;
    }
cout<<"\t"<<endl;
}


}
