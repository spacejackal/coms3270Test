#include <stdio.h>
#include "pointcloud.h"

struct point{
	double x, y, height;
};

int main() {
	stat1();
	return 1;
}

int stat1() {
	struct point high;
	struct point low;
	double total;
	int count;
	
	scanf("%lf %lf %lf", &high.x, high.y, high.height);
	//scanf("%lf", &high.y);
	//scanf("%lf", &high.height);


	printf("this is the x location %lf\n", high.x);
	printf("this is the y location %lf\n", high.y);
	printf("this is the height of the location %lf\n", high.height);

	return 0;
}