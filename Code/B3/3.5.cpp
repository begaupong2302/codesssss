#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,z,F;
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	F=((x + y + z) / (x*x + y*y + 1)) - fabs(x-z*cos(y));
	printf("%f",F);
return 0;
}
