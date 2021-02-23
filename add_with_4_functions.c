//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
float input()
{
  float n1;
  printf("Enter number: \n");
  scanf("%f", &n1);
  return n1;
}
float sum(float n1, float n2)
{
  float sum;
  sum=n1+n2;
  return sum;
}
void output(float n1, float n2, float result)
{
  printf("Sum of %f and %f is %f", n1,n2,result);
}
int main()
{
  float n1,n2,res;
  n1 = input();
  n2 = input();
  res = sum(n1,n2);
  output(n1,n2,res);
  return 0;
}
