#include <stdio.h>
#include <math.h>

int main() 
{
	double a,b;
	int c;
	scanf("%lf%lf",&a,&b);
	c=ceil(b*log10(a));      /* ceil取上位的正整數；ceill取上位的負整數； 
								floor取下位的正整數；floorl取下位的負整數 */ 
	if(c=b*log10(a))
		c++;
	printf("%d",c);
}
