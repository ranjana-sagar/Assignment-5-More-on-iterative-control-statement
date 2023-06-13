#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n;n--)
       printf("%d ",n*2-1);
    getch();
    return 0;

}