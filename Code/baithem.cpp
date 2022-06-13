#include <stdio.h>
#include <math.h>
int main()
{
	float epsilon, e = 1, a = 1;
	scanf("%f",&epsilon);
	for (int i = 1; a >= epsilon; i++)
	{
		a = a / i;
		e = e + a;
	};
	printf("%f", e);
	return 0;
}
