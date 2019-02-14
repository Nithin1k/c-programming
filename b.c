#include<stdio.h>
void main()
{
int a;
printf("Enter value");
scanf("%d",&a);
if(a>=1 && a<=100000)
{
if(a%2==0)
printf("THE ENTERED VALUE IS EVEN");
else
printf("THE ENTERED VALUE IS ODD");
}
else
printf("\nvalue exceeds limit\n");
}
