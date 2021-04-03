
#include<iostream>
using namespace std;

int main()
{

    int number[]={4,3,2,10,12,1,5,6};

  int size_a=sizeof(number)/sizeof(number[0]);
  int min_index;

  for(int i=0;i<=size_a-1;i++){
    min_index=i;
    for(int j=i+1;j<=size_a-1;j++){
        if(number[min_index]>number[j])
            min_index=j;
    }
    swap(number[min_index],number[i]);
  }


  cout<<"Shorted data"<<endl;

  for(int i=0;i<size_a;i++)
    cout<<number[i]<<" ";
  cout<<endl;
  return 0;
}




