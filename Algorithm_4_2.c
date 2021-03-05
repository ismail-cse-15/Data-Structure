//Insert into a nonempty array .
//We want to insert an element into kth position of n elements array (K<=n)

#include<stdio.h>
int main(){
int data[100]={1,2,4,8,16,32,64,128};
int n=8,k,item,i;
printf("Elements of array n: %d\n",n);
printf("Insert the position where you want to insert an item k(less than or equal %d): ",n);
scanf("%d",&k);
printf("Enter the item you want to inset: ");
scanf("%d",&item);
for(i=n-1;i>=(k-1);i--){
    data[i+1]=data[i];
}
data[k-1]=item;

printf("data after insertion\n");
for (i=0;i<(n+1);i++){
    printf("%d ",data[i]);

}
return 0;
}
