#include <stdio.h>
#include <math.h>

int main() 
{
	double a,b;
	int c;
	scanf("%lf%lf",&a,&b);
	c=ceil(b*log10(a));      /* ceil���W�쪺����ơFceill���W�쪺�t��ơF 
								floor���U�쪺����ơFfloorl���U�쪺�t��� */ 
	if(c=b*log10(a))
		c++;
	printf("%d",c);
}
