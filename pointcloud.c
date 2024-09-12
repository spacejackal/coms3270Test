#include <stdio.h>


int stat1() {
	double highx, highy;
	double lowx, lowy;
	long long highHeight,lowHeight;
	scanf("%lf", &highx);
	scanf("%lf", &highy);
	scanf("%ll", &highHeight);
	
	printf("this is the x location %lf\n",highx);
	printf("this is the y location %lf\n", highy);
	printf("this is the height of the location %llf\n", highHeight);
	
	return 0;
}

int main() {
	stat1();
	return 1;
}