//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct coordinates
{
	int x,y;
}c1, c2;

void inputf()
{
  printf("Enter the coordinates for point 1: ");
	scanf("%d%d",&c1.x, &c1.y);
	printf("Enter the coordinates for point 2: ");
	scanf("%d%d", &c2.x,&c2.y);
	printf("%d %d %d %d\n", c1.x,c1.y, c2.x, c2.y);
}

void display(float d)
{
	printf("The distance between (%d,%d) and (%d,%d) is %f units\n",c1.x, c1.y, c2.x, c2.y,d);
}

int main()
{
	float distance;
	int xcord, ycord;
	inputf();
	xcord = pow((c1.x-c2.x),2);
	ycord = pow((c1.y-c2.y),2);
	distance = sqrt(xcord+ycord);
	display(distance);
	return 0;
}
