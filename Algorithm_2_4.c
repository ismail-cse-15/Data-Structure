//#leniar search
#include<stdio.h>
int main(){
    int n, data[100];
  int i,item,loc=-1;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for (i=0;i<n;i++){
    scanf("%d",&data[i]);

  }
  printf("Enter the element you want to search: ");
  scanf("%d",&item);
  for (i=0;i<n;i++){
    if(item==data[i])
    {
        loc=i+1;
    }
  }
  if(loc==-1)
    printf("Item is not in the array\n");
  else
    printf("Item is found in location: %d",loc);

  return 0;
}

