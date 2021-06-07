#include<stdio.h>

//inserting an element into an array
int main()
{


    int score[10]={50,57,87,21,42};
    int position,item,i,n=5;

    printf("Enter a position where you enter a number less than %d\n",n);
    scanf("%d",&position);
    printf("Enter the value you want to insert\n");
    scanf("%d",&item);

    for (i=(n-1);i>=position;i--){
        score[i+1]=score[i];
    }
    score[position]=item;

    for(i=0;i<n+1;i++){
        printf("%d ",score[i]);
    }


    return 0;


}
