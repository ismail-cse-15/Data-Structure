#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_[20];
int main(){

  int n,x,y;
  cout<<"Enter the value of elements"<<endl;
  cin>>n;
  cout<<"Enter the range of elements"<<endl;
  cin>>y;
  cout<<"Enter the value of elements"<<endl;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;

      count_[x]++;
  }
  // display the frequency of elements
for(int i=1;i<=y;i++){
    cout<<count_[i]<<" ";
    count_[i]+=count_[i-1];

}
cout<<endl;
int d=0,m;
// perform sorting and display
for(int i=0;i<=y;i++){
    m=count_[i]-d;
    while(m){
        cout<<i<<" ";
        m--;
        d++;
    }
}
   return 0;
}
