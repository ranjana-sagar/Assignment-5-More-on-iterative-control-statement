#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(;n>=1;n--)
    printf("%d ",n);
    getch();
    return 0;
}