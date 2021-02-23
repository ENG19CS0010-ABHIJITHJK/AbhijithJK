//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input1()
{
  float x1,y1;
  printf("Enter coordinates of point 1: ");
  scanf("%f,%f", &x1, &y1);
}
float input2()
{
  float x2,y2;
  printf("Enter coordinates of point 2: ");
  scanf("%f,%f", &x2, &y2);
}
float distance(float x1, float y1, float x2, float y2)
{
  float d;
  d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return d;
}
void output(float x1, float y1, float x2, float y2, float d)
{
  printf("The distance between (%f,%f) and (%f,%f) is %f", x1, y1, x2, y2, d);
}
int main()
{
  float x1, y1, x2, y2,d;
  x1 = input1();
  y1 = input1();
  x2 = input2();
  y2 = input2();
  d= distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,d);
  return 0;
}

