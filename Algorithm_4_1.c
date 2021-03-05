//traversing an array into a bound and perform insertion
#include<stdio.h>
int main()
{

    int lb,ub,i,data[100];
    printf("Enter lower bound and upper bound less than 100\n");

    scanf("%d %d",&lb,&ub);
    printf("Insert data into array\n");
    for (i=lb;i<=ub;i++){
        scanf("%d",&data[i]);
    }

   return 0;
}
