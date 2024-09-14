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
	struct point temp;
	double total;
	int count = 1;
	
	scanf("%lf %lf %lf", &high.x, &high.y, &high.height);
	low.x = high.x;
	low.y = high.y;
	low.height = high.height;
	total += high.height;
	while (scanf("%lf %lf %lf", &temp.x, &temp.y, &temp.height) != EOF) {
		if (temp.height > high.height) {
			high.x = temp.x;
			high.y = temp.y;
			high.height = temp.height;
		}
		else if (temp.height < low.height) {
			low.x = temp.x;
			low.y = temp.y;
			low.height = temp.height;
		}
		count++;
		total = temp.height;
	}


	printf("this is the x location %lf\n", high.x);
	printf("this is the y location %lf\n", high.y);
	printf("this is the height of the location %lf\n", high.height);

	return 0;
}