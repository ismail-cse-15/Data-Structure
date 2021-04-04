#include<iostream>
#include<math.h>
using namespace std;

void merge_sort(int arr[],int low,int high);
void merge_(int arr[], int low,int middle,int high);
void display(int arr[],int element);

int main()
{

        int number[]={4,3,2,10,12,1,5,6,11};

       int size_a=sizeof(number)/sizeof(number[0]);
       cout<<"Un-sorted array\n";
       display(number,size_a);

       merge_sort(number,0,size_a-1);

       cout<<"Sorted array\n";
       display(number,size_a);
}
void merge_sort(int arr[],int low,int high){

             if(low<high){
                int middle=(low+high)/2;


                merge_sort(arr,low,middle);
                merge_sort(arr,middle+1,high);
                merge_(arr,low,middle,high);
             }
             else
                return;


}

void merge_(int arr[], int low,int middle,int high){

    int p,q,i,j,k;

    p=middle-low+1;
    q=high-middle;

    int left[p],right[q];

    for(i=0;i<p;i++){
        left[i]=arr[low+i];
    }
    for(j=0;j<q;j++){
        right[j]=arr[middle+1+j];
    }
    i=0;
    j=0;
    k=low;
    while(i<p && j<q){
       if(left[i]<=right[j]){
        arr[k]=left[i];
        i++;
       }
       else{
        arr[k]=right[j];
        j++;
       }
       k++;
    }
    for(;i<p;i++){
        arr[k]=left[i];
        k++;
    }
    for(;j<q;j++){
        arr[k]=right[j];
        k++;
    }
}
void display(int arr[],int element){

    for(int i=0;i<element;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\b\n";
}


