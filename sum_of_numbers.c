//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>

int countt()
{
    int coun;
    printf("Enter the count ");
    scanf("%d",&coun);
    return coun;
}
int input(int coun)
{
    int a[50],sum=0;
    printf("Enter the Numbers ");
    for(int i =0;i<coun;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i =0;i<coun;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int display(int sum)
{
    printf("The sum of the given numbers is %d",sum);
}

int main()
{
    int n=countt();
    int s =input(n);
    display(s);
}
