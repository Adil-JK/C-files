#include<stdio.h>
#include<math.h>

main(){
	int x,y;
	int result;
	
	x = 2;
	y = 3;
	
	result = pow(x,y);
	scanf("Enter the base %d and exponent %d", &x, &y);
	printf("%d to the power %d is %d", x, y, result);
	
	return 0;
}


