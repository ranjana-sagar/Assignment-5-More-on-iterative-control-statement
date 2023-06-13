#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter an number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       printf("%d ",i*i);
    getch();
    return 0;
}