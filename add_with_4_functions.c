//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input()
{
  int n1;
  printf("Enter number: \n");
  scanf("%d", &n1);
  return n1;
}
int sum(int n1, int n2)
{
  int sum;
  sum=n1+n2;
  return sum;
}
void output(int n1, int n2, int result)
{
  printf("Sum of %d and %d is %d", n1,n2,result);
}
int main()
{
  int n1,n2,res;
  n1 = input();
  n2 = input();
  res = sum(n1,n2);
  output(n1,n2,res);
  return 0;
}
