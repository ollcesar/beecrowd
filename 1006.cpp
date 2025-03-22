#include <stdio.h>

int main()
{
	double a, b, c, m;
	
	scanf("%lf %lf %lf" &a, &b, &c);
	
	/*A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5*/
	m = ((a*2)+(b*3)+(c*5))/10

	printf("MEDIA = %.1lf\n", m);
}