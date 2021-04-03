#include<iostream>
using namespace std;
int main(){


   int number[]={4,3,2,10,12,1,5,6};
   int size_a=sizeof(number)/sizeof(number[0]);


   for(int i=0;i<size_a;i++){

   for(int j=0;j<=size_a-i-2;j++){
   if(number[j]>number[j+1]){
        swap(number[j],number[j+1]);
        }
   }}
  cout<<"Shorted data"<<endl;
   for(int i=0;i<size_a;i++){
    cout<<number[i]<<" ";
       }
       cout<<"\b\n";




   return 0;





}


