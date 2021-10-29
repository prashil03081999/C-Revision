#include<stdio.h>

int main()
{
    int j;
    printf("Enter Table Number:");
    scanf("%d",&j);
      
    for(int i=1;i<11;i++)
    {
        printf("%d X %d= %d\n",j,i,j*i);
    }
    return 0;
}
