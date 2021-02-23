//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input(char trait)
{
  float inp;
  if (trait =='h')
  printf("Enter the height:");
  else if(trait =='d')
  printf("Enter the depth:");
  else 
  printf("Enter the breath:");
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
  h= input('h');
  d= input('d');
  b= input('b');
  v= volume(h,d,b);
  output(h,d,b,v);
  return 0;
}
