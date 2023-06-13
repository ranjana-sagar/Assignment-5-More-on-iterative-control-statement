#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    for(;n;n--)
      printf("%d ",n*2);
    getch();
    return 0;
}