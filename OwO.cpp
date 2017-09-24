#include <stdio.h>
#include <math.h>

void solve(double a, double b, double c, double *x1, double *x2)
{
	*x1 = (-b-sqrt(b*b-4*a*c))/2/a;
	*x2 = (-b+sqrt(b*b-4*a*c))/2/a;
}

int main(int argc, char** argv) 
{
	double a, b, c1, c2, sol1x, sol1y, sol2x, sol2y;
	printf("請輸入兩個實數:");
	scanf("%lf %lf", &a, &b);
	if(a==0)
	{
		sol1x=-sqrt(3);
		sol1y=0;
		sol2x=sqrt(3);
		sol2y=0;
	}
	else
	{
		double k = b/a;
		solve(k*k+4, 2*k, -2, &c1, &c2); //(k^2+4)*y^2 + 2ky - 2 = 0
		sol1x=b*c1+1;
		sol1y=a*c1;
		sol2x=b*c2+1;
		sol2y=a*c2;
	}
	printf("兩個交點分別為:(%lf,%lf),(%lf,%lf)\n", sol1x, sol1y, sol2x, sol2y);
	return 0;
}
