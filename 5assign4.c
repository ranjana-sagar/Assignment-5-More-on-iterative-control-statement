#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n*2-1;i+=2)
       printf("%d ",i);
    getch();
    return 0;
}