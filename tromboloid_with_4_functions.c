//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
  float inp;
  printf("Enter the height, depth and breadth: ");
  scanf("%f", &inp);
  return inp;
}
float volume(float h, float d, float b)
{
  float v;
  v = ((h*d*b)+(d/b))*1/3;
  return v;
}
void output(float h, float d, float b, float vol)
{
  printf("Volume of tromboloid is %f \n", vol);
}
int main()
{
  float h,d,b,v;
  h= input();
  d= input();
  b= input();
  v= volume(h,d,b);
  output(h,d,b,v);
  return 0;
}

