#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",i*2);
    getch();
    return 0;
}