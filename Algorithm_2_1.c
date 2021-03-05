//Finding maximum element

#include<stdio.h>
int main(){

  int n, data[100];
  int i,max,loc;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for (i=0;i<n;i++){
    scanf("%d",&data[i]);

  }
  max=data[0];
  loc=0;
  for(i=0;i<n;i++){
    if(data[i]>max)
    {
        max=data[i];
        loc=i;
    }

  }
  printf("Maximum value is %d and find in %d location",max,loc+1);


  return 0;


}
