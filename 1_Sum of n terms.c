#include<stdio.h>
int main()
  {
     int sum=0,n;
     printf("Enter Value of n:");
     scanf("%d",&n);
     for(int i=0;i<=n;i++)
        sum=sum+i;
     printf("Sum of n terms :%d", sum);
    return 0;
  }
