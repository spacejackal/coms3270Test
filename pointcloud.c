#include <stdio.h>
#include "pointcloud.h"

//this struct is used to keep track of points in a condensed and easy manner
struct point{
	double x, y, height;
};

//the main method calls stat1
int main() {
	stat1();
	return 1;
}
//stat1() gets the highest and lowest point and also computes the average
int stat1() {
	struct point high; //defines the struct to keep track of the high point
	struct point low;  //defines the struct to keep track of the low point
	struct point temp; //defines the struct to keep a tep point to compare to the high and low points
	double total;	   //defines the total to compute the average
	int count = 1;
	
	scanf("%lf %lf %lf", &high.x, &high.y, &high.height); //gets the first point and makes it the high point;
	low.x = high.x;		//bellow assinments are used to make the low point the same as the high point
	low.y = high.y;
	low.height = high.height;
	total += high.height;
	while (scanf("%lf %lf %lf", &temp.x, &temp.y, &temp.height) != EOF) { //reads all set of 3 double values and assings it to the temp point
		if (temp.height > high.height) {  //if the temp point has more height the the high point, make it the high point
			high.x = temp.x;
			high.y = temp.y;
			high.height = temp.height;
		}
		else if (temp.height < low.height) { //if the temp point has less height then the low point, make it the low point
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