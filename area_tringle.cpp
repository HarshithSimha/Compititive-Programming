#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,t;
	printf("ENTER THE SIDE LENGTH OF TRINGLE:");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b)>c && (b+c)>a && (a+c>b))
	{
	s=(a+b+c)/2;
	t=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("THE AREA OF TRINGLE IS :  %.2f",t);
}
else
     printf("NO TRINGLE");
 } 
