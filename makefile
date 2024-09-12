project1: pointcloud.o
	gcc pointcloud.o -o project1

pointcloud.o: pointcloud.c pointcloud.h
	gcc -c pointcloud.c
	
clean:
	rm -f *.o project1