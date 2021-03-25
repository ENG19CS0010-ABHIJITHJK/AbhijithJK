//WAP to find the sum of n fractions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
struct fraction
{
 int numerator;
 int denominator;
};
typedef struct fraction Frac;

Frac input();
Frac sum(Frac F1, Frac F2);
int gcd(int x, int y);
Frac compute();
int output(Frac sum);
 
Frac input()
{
 Frac f;
 printf("numerator is :\n ");
 scanf("%d",&f.numerator);
 printf("denominator is :\n ");
 scanf("%d",&f.denominator);
 return f;
}
 
int gcd(int x, int y)
{
 int i,flag;
 for(i = 1; i <= x && i <= y; i++)
   {
       if(x % i == 0 && y % i == 0)
           flag = i;
   }
   return flag;
}
 
Frac sum(Frac F1, Frac F2)
{
 Frac F3;
 int c;
 F3.numerator = ((F1.numerator*F2.denominator)+ (F2.numerator*F1.denominator));
 F3.denominator = F1.denominator*F2.denominator;
 c = gcd(F3.numerator,F3.denominator);
 F3.numerator = F3.numerator/c;
 F3.denominator = F3.denominator/c;
 return F3;
}
 
Frac compute()
{
 int terms,i;
 Frac flag,z;
 printf("Enter the no. of terms: \n");
 scanf("%d",&terms);
 Frac f[terms];
 for(i=0;i<terms;i++)
{
   printf("Enter the fraction %d\n",i+1);
   f[i] = input();
 }
 if(terms==1)
{
   z = f[0];
 }
 else{
   flag = f[0];
   for(i=0;i<terms-1;i++)
{
     z = sum(flag,f[i+1]);
     flag = z;
   }
 }
 return z;
}
 
int output(Frac sum)
{
 printf("The sum of the given fractions : %d/ %d\n",sum.numerator,sum.denominator);
 return 0;
}

int main()
{
 Frac flag;
 flag = compute();
 output(flag);
 return 0;
}
