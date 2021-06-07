#include<stdio.h>
int main()
{

    int score[10]={50,57,87,21,42};
    int position, i,n=5;

    printf("Enter the position of number you want to delete less than %d\n",n);
    scanf("%d",&position);

    for(i=position;i<n;i++){
        score[i]=score[i+1];
    }
    n=n-1;
   for(i=0;i<n;i++)
    printf("%d \n",score[i]);

   return 0;

}
