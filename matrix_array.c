#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main() {
	
	int matrix[3][3] = {{95, 85, 82}, {58, 75, 62}, {81, 66, 87}};
//	int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
	 
	printf("The second element of 2nd row of matrix is %d\n", matrix[1][1]);
	
	printf("The matrix is: \n");
	int i,j;
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d \t", matrix[i][j]);
		}
		printf("\n");
		
	}
	
	
}
