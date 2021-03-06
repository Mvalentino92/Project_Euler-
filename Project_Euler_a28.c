#include <stdio.h>
#include <math.h>
/*This problem was about finding the sum of the diagonals of a number spiral
Like so
		21 22 23 24 25
		20  7  8  9 10
		19  6  1  2 11
		18  5  4  3 12
		17 16 15 14 13
Generated by counting clockwise.
The diagonal sum is 101 (21 + 7 + 1 + 3 + 13 + 17 + 5 + 9 + 25)

This is a 5*5 number spiral, the problem wanted the diagonal sum of a 1001*1001 spiral

I did so by finding patterns in the generated numbers in each direction, starting with the most discernible pattern to find the northeast diagonal I named x*/

int main()
{
	unsigned int Total = 1,x,y,z,q,n = 1,i;

	for(i=3;i<=1001;i+=2){		
		x = pow(i,2);
		y = x-(n*6);	//Use x to get y
		z = y+(n*2);	//Use y to get z
		q = x-(n*2);	//And use x to get q as well
		n += 1;		//Keeping track of iterations
		Total += (x+y+z+q);	//Add them up
	}
	printf("The total is %d\n",Total);
	return 0;
}


